using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace nachKrZad
{
    class Program
    {

        static void print(double[,] array, int n, int m)
        {
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < m; j++)
                {
                    System.Console.Write("{0} ", Math.Round(array[i, j], 7));
                }
                System.Console.WriteLine();
            }
            System.Console.WriteLine();
        }
        static void printSpe(double[,] array, int n, int m)
        {
            for (int i = 0; i < n; i+=10)
            {
                for (int j = 0; j < m; j+=10)
                {
                    System.Console.Write("{0} ", Math.Round(array[i, j], 7));
                }
                System.Console.WriteLine();
            }
            System.Console.WriteLine();
        }
        static double U(double x, double t)
        {
            return Math.Exp(-0.25*t) * Math.Cos(0.5 * x) + Math.Exp(-t) * (1 - x) * x ;
        }
        static double A(double tao, double h)
        {
            return tao/(h*h);
        }
        static double B(double tao, double h)
        {
            return (2*tao - h*h) / (h * h);
        }
        static double C(double tao, double h)
        {
            return tao / (h * h);
        }
        static double f(double x, double t)
        {
            return Math.Exp(-t)*(x*x-x+2);
        }
        static double D(double tao)
        {
            return tao;
        }
        static double phi(double x)
        {
            return Math.Cos(0.5*x) + (1-x)*x;
        }
        static double ksi1(double t)
        {
            return Math.Exp(-0.25*t);
        }
        static double ksi2(double t)
        {
            return Math.Exp(-0.25 * t) * Math.Cos(0.5) ;
        }
        static void Main(string[] args)
        {
            double a = 0;
            double b = 1;
            int n = 100;
            double h =(b-a)/ n ;
            double tao = (h * h) / 4;
            int m = 100; //количесвто слоев
            double[,] ar = new double[m+1, n + 1];
            double[,] u = new double[m+1,n+1];
            int k = 0;
            int i = 0;
            for (double t = 0; t <= tao*m; t += tao)
            {
                for (double x = 0; x <= b; x += h)
                {
                    u[k, i] = U(x,t);
                    i++;
                }
                i = 0;
                k++;       
            }
            k = 0;
            i = 0;

            for (double t = 0; t <= 0; t += tao)
            {
                for (double x = 0; x <= b; x += h)
                {
                    ar[k, i] = phi(x);
                    i++;
                }
            }
            k = 1;
            i = 0;


            for (double t = tao; t <= tao*m; t += tao)
            {
              
                for (double x = 0; x <= b; x += h)
                {
                    if (x == 0)
                    {
                        ar[k,i] = ksi1(t); 
                        i++;
                    }
                    if (Math.Round(x, 6) == 1)
                    {
                        ar[k, i] = ksi2(t);
                        i++;
                    }
                    else if (x != 0 && x != 1)
                    {
                        ar[k, i] = A(tao,h) * ar[k-1,i+1] - B(tao,h)*ar[k-1,i] + C(tao,h)*ar[k-1,i-1] + tao*f(x,t);
                        i++;
                    }
                }
                i = 0;
                k++;
            }
            printSpe(ar, m, n+1-10);
            System.Console.WriteLine();
            printSpe(u, m, n+1-10);
        }
    }
}
