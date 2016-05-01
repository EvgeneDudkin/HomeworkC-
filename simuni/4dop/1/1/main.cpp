#include <iostream>
using namespace std;
struct Node{
	int value;
	Node* next;
};
class list{
private:
	int size;
	Node* sHead;
public:
	list();
	bool isEmpty();
	void print();
	void insertInHead(int s);
	void insertInEnd(int s);
	void insertInPos(int x, int s);
};

list::list():
	size(0)
{
}

bool list::isEmpty()
{
	return (size == 0);
}

void list::insertInHead(int s)
{
	if (this->isEmpty())
	{
		Node* temp = new Node;
		temp->next = nullptr;
		temp->value = s;
		sHead = temp;
	}
	else
	{
		Node* temp = new Node;
		temp->next = sHead;
		temp->value = s;
		sHead = temp;
	}
	size++;
}

void list::insertInEnd(int s)
{
	if (this->isEmpty())
	{
		Node* temp = new Node;
		temp->next = nullptr;
		temp->value = s;
		sHead = temp;
	}
	else
	{
		Node* temp = new Node;
		Node* temp1 = new Node;
		temp = sHead;
		for(int i = 1; i < size; i++)
		{
			temp = temp->next;
		}
		temp->next = temp1;
		temp1->value = s;
		temp1->next = nullptr;
	}
	size++;
}


void list::print()
{
	if (this->isEmpty())
	{
		cout << "List is empty" << endl;
		abort();
	}
	else
	{
		Node* out = sHead;
		while (out != nullptr)
		{
			cout << out->value << " ";
			out = out->next;
		}
		cout << endl;
	}
}

void list::insertInPos(int x, int s)
{
	if (x <= size && x >= 0)
	{
		if (x == 0)
		{
			Node* temp = new Node;
			temp->next = sHead;
			sHead = temp;
			temp->value = s;
		}
		else
		{
			Node* temp = sHead;
			Node* temp1 = new Node;
			for(int i = 1; i < x; i++)
			{
				temp = temp->next;
			}
			Node* k = temp->next;
			temp->next = temp1;
			temp1->value = s;
			temp1->next = k;
		}
		size++;
	}
}

void insertInListIsPos(list* l,int n, int x)
{
	l->insertInPos(n,x);
}

int main()
{
	list l;
	int n = 0;
	int x = 0;
	cin >> n;
	while(n != 0)
	{
		cin >> x;
		l.insertInEnd(x);
		n--;
	}
	l.print();
	insertInListIsPos(&l,0,100);
	l.print();
	return 0;
}