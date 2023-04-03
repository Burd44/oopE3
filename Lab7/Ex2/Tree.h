#pragma once

struct Node
{
	int val;
	struct Node* left;
	struct Node* right;
};

template<typename T>
class Tree
{
	Node prim;
	int nr = 0;
	Tree<T>** c;
public:

	Tree()
	{
		Node* prim = new Node;
	}

	Node* add_node(T a) 
	{
			Node* temp = new Node;
			temp->val = a;
			temp->left = nullptr;
			temp->right = nullptr;
			return temp;
	}

	Node* get_node(Node* a, T b) 
	{
		if (a == nullptr)
		{
			return;
		}
		else
		{
			if (a->val == b)
			{
				return a;
			}
			get_node(a->left, b);
			get_node(a->right, b);
		}
	}

	Node* minval(Node* a)
	{
		Node* current = a;
		while (current && current->left != NULL)
		{
			current = current->left;
		}
		return current;
	}

	Node* delete_node(Node* a,T b) 
	{
		if (a == NULL)
		{
			return a;
		}
		if (b < a->val)
		{
			a->left = delete_node(a->left, b);
		}
		else if (b > a->val)
		{
			a->right = delete_node(a->right, b);
		}
		else
		{
			if (a->left == NULL and a->right == NULL)
			{
				return NULL;
			}
			else if (a->left == NULL)
			{
				Node* temp = a->right;
				delete a;
				return temp;
			}
			else if (a->right == NULL)
			{
				Node* temp = a->left;
				delete a;
				return temp;
			}
			Node* temp = minval(a->right);
			a->val = temp->val;
			a->right = delete_node(a->right, temp->val);
		}
		return a;
	}

	Node* insert(T a, T b) 
	{
		Node* newnode = add_node(b);
		Node* x = b;
		Node* y = nullptr;
		while (x != nullptr)
		{
			y = x;
			if (b < x->val)
			{
				x = x->left;
			}
			else
			{
				x = x->right;
			}
		}
		if (y == NULL)
		{
			y = newnode;
		}
		else if (b < y->val)
		{
			y->left = newnode;
		}
		else
		{
			y->right = newnode;
		}
		return y;
	}

	int count(Node* a) 
	{
		if (a == nullptr)
		{
			return;
		}
		else
		{
			nr++;
			count(prim->left);
			count(prim->right);
		}
	}
};