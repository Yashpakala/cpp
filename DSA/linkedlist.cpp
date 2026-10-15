#include<bits/stdc++.h>
using namespace std;

class Node {
	public:
		int data;
		Node* next;

		Node(int data) {
			this->data = data;
			this->next = nullptr;
		}
		Node() {
		}
};

Node* insertatbegin(Node* head, int val) {
	Node* newNode = new Node(val);
	newNode->next = head;
	return newNode;
}


Node* insertattail(Node* head, int val) {
	Node* newNode = new Node(val);
	if(head == nullptr) return newNode;

	Node* temp = head;
	while(temp->next != NULL) {
		temp = temp->next;
	}
	temp->next = newNode;
	return head;
}

Node* deletehead(Node* head) {
	if(head == NULL) return nullptr;
	Node* temp = head;
	head = head->next;
	delete temp;
	return head;
}

Node* deleteend(Node* head) {
	if(head == NULL) {
		return nullptr;
	}
	Node* temp = head;
	while(temp->next->next != nullptr) {
		temp = temp->next;
	}
	temp->next = nullptr;
	return head;
}

void print(Node* head) {
	Node* temp = head;
	while(temp != NULL) {
		cout << temp->data << " ";
		temp = temp->next;
	}
}

int main() {
	Node* head = new Node(20);
	Node* newhead;
	insertattail(head, 10);
	insertattail(head, 15);
	head = insertatbegin(head, 100);
	newhead = insertatbegin(head, 500);
	print(newhead);
	cout << endl;
	newhead = deletehead(newhead);
	print(newhead);
	cout << endl;
	newhead = deleteend(newhead);
	print(newhead);
	cout << endl;
	newhead = deleteend(newhead);
	print(newhead);
	return 0;

}



