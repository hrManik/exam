#include <iostream>
using namespace std;

struct Node
{
    char data;
    Node *left;
    Node *right;
    Node(int val) : data(val), left(NULL), right(NULL) {}
};

void inorder(Node *node)
{
    if (!node)
        return;
    inorder(node->left);
    cout << node->data << " ";
    inorder(node->right);
}

void preorder(Node *node)
{
    if (!node)
        return;
    cout << node->data << " ";
    preorder(node->left);
    preorder(node->right);
}

void postorder(Node *node)
{
    if (!node)
        return;
    postorder(node->left);
    postorder(node->right);
    cout << node->data << " ";
}

int main()
{
    Node *root = new Node('O');
    root->left = new Node('M');
    root->right = new Node('A');
    root->left->left = new Node('R');
    root->left->right = new Node('I');

    cout << "Now show what we insert into this code : " << root->data
         << root->left->data
         << root->right->data
         << root->left->left->data
         << root->left->right->data;
    cout << endl;

    cout << "Preorder Traversal : ";
    preorder(root);
    cout << endl;

    cout << "Inorder Traversal : ";
    inorder(root);
    cout << endl;

    cout << "Postorder Traversal : ";
    postorder(root);
    cout << endl;
}