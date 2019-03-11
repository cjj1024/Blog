#include <iostream>

using namespace std;

typedef struct node
{
	int data;
	struct node* next;
} Node;

typedef struct
{
	struct node* head;
} Tree;

Tree* CreateTree()
{
	Tree* tree = new Tree;
	Node* node = new Node;
	node->next = NULL;
	tree->head = node;

	return tree;
}

void AddNode(Tree* tree, Node* node)
{
	if (tree == NULL || node == NULL)
	{
		return;
	}

	node->next = tree->head->next;
	tree->head->next = node;
}

void Destroy(Tree* tree)
{
	if (tree == NULL)
	{
		return;
	}

	Node* node = tree->head;
	Node* nextNode = tree->head->next;
	while (nextNode != NULL)
	{
		node = nextNode;
		nextNode = nextNode->next;
		delete node;
	}

	delete tree;
}


void PrintTree(Tree* tree)
{
	Node* node = tree->head->next;
	while (node != NULL)
	{
		cout << node->data << " ";
		node = node->next;
	}
	cout << endl;
}

int main()
{
	Tree* tree = CreateTree();
	Tree* tree2 = CreateTree();
	Node* node1 = new Node;
	node1->data = 1;
	Node* node2 = new Node;
	node2->data = 2;
	Node* node3 = new Node;
	node3->data = 3;
	Node* node4 = new Node;
	node4->data = 4;
	Node* node5 = new Node;
	node5->data = 5;
	Node* node6 = new Node;
	node6->data = 6;
	Node* node7 = new Node;
	node7->data = 7;

	AddNode(tree, node1);
	AddNode(tree, node2);
	AddNode(tree, node3);

	AddNode(tree2, node4);
	AddNode(tree2, node5);
	AddNode(tree2, node6);

	PrintTree(tree);
	PrintTree(tree2);

	//AddNode(tree, node7);
	//AddNode(tree2, node7);

	//PrintTree(tree);
	//PrintTree(tree2);

	cout << endl;
	system("pause");
	return 0;
}