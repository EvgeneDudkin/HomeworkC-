#include <iostream>
#include <vector>
using namespace std;


struct Node
{
	int k;
	Node* left;
	Node* right;
	Node* parent;
};

class binTree{
	Node head;
	int size;
public:
	binTree()
	{
		head.left = nullptr;
		head.right = nullptr;
		head.parent = nullptr;
		size = 0;
	}
	void insert(int a);
	Node* headTree();
};

Node* binTree::headTree()
{
	return &head;
}

void binTree::insert(int a)
{
	if (size == 0)
	{
		head.k = a;
		head.left = nullptr;
		head.right = nullptr;
		head.parent = &head;
		size++;
	}
	else
	{
		Node* n = new Node;
		n->k = a;
		Node* x = &head;
		while ( x != nullptr)
		{
			if (a > (x->k))
			{
				if ( x->right != nullptr)
				{
					x =x->right;
				}
				else
				{
					n->parent = x;
					x->right = n;
					n->right = nullptr;
					n->left = nullptr;
					size++;
					break;
				}
			}
			else
			{
				if ( x->left != nullptr)
				{
					x = x->left;
				}
				else
				{
					n->parent = x;
					x->left = n;
					n->right = nullptr;
					n->left = nullptr;
					size++;
					break;
				}
			}
		}
	}
}

void print(Node* a)
{
	if (a != nullptr)
	{
		print(a->left);
		cout << a->k  << " ";
		print(a->right);
	}
}

void specPrint(Node* a,int temp)
{
	if (a != nullptr)
	{
		temp++;
		specPrint(a->left,temp);
		cout << endl << a->k  << " ---- " << temp << " ; ";
		specPrint(a->right,temp--);
	}
	temp--;
}

int main()
{
	int x = -1;
	vector<int> v;
	while (x != 0)
	{
		cin >> x;
		v.push_back(x);
	}
	binTree b = binTree();
	for (int i = 0; i < v.size(); i++)
	{
		b.insert(v[i]);
	}
	print(b.headTree());
	specPrint(b.headTree(),-1);
	return 0;
}