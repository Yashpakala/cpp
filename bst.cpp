#include <bits/stdc++.h>
using namespace std;

struct Node {
	int data;
	Node* left;
	Node* right;

	Node(int value) {
		data = value;
		left = right = NULL;
	}
};

void printtree(Node* root) {
	if(root != NULL) {
		cout << root->data << " ";
		printtree(root->left);
		printtree(root->right);
	}

}

void preorder(Node* root) {
	if(root != NULL) {
		cout << root->data << " ";
		preorder(root->left);
		preorder(root->right);
	}
}

void postorder(Node* root) {
	if(root == NULL) return;
	postorder(root->left);
	postorder(root->right);
	cout << root->data << " ";
}


void inorder(Node* root) {
	if(root == NULL) return;
	inorder(root->left);
	cout << root->data << " ";
	inorder(root->right);
}


Node* insert(Node* root, int val) {
	if(root == NULL) {
		return new Node(val);
	}
	if(root->data == val) return root;
	if(root->data < val) {
		root->right = insert(root->right, val);
	}
	else {
		root-> left = insert(root->left, val);
	}
	return root;
}

int main() {
	Node* root = new Node(100);
	insert(root, 20);
	insert(root, 500);
	insert(root, 10);
	insert(root, 30);
	insert(root, 40);
	cout << "preorder: "; 
	preorder(root);
	cout << endl;
	cout << "inorder: ";  
	inorder(root);
	cout << endl;
	cout << "postorder: ";
	postorder(root);
	return 0;
}
