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
	void print();
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

bool find_even(Node* a)
{
	if (a != nullptr)
	{
		find_even(a->left);
		if (a->k % 2 == 0 && a->k != 0)
		{
			throw true;
		}
		find_even(a->right);
	}
	return false;
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
	try
	{
		cout << endl << find_even(b.headTree()) << endl;
	}
	catch (bool q)
	{
		cout << endl << q << endl;
	}
	return 0;
}