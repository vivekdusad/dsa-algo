#include<bits/stdc++.h>
using namespace std;

struct Node
{
	int data;
	struct Node* next;


}*First = NULL;
//Create linked list
Node* createLinkedList(int A[], int n) {
	Node* p, * linked;
	First = new Node;
	First->data = A[0];
	First->next = NULL;
	linked = First;
	for (int i = 1; i < n; i++) {
		p = new Node;
		p->data = A[i];
		p->next = NULL;
		linked->next = p;
		linked = p;
	}
    return First;
}
void displayLinkedList(Node* p) {

	while (p != NULL) {
		cout<<p->data;
		p = p->next;
	}

}
Node* reverseList(Node* head){

    Node*t = new Node;
    t->data = head->data;
    t->next = NULL;
    Node*p = head->next;

    while (p != NULL)
    {
        Node*temp = new Node;
        temp->data = p->data;
        temp->next = t;
        t = temp;
        p = p->next;
    }
    head = t;

    return head;

    
}
Node* reverseLinkedList(Node*head){
    Node* prev = NULL;
    Node* curr = head;
   
    while (curr != NULL)
    {
        Node* after = curr->next;
        curr->next = prev;
        prev = curr;
        curr = after;
        
    }
    return prev;
    
}

int main() {
	int A[5] = { 1,2,3,4,5 };
	int n = 5;
	Node* head = createLinkedList(A, n);//Linked list created
	displayLinkedList(head);//
    cout<<endl;

    head = reverseLinkedList(head);
    displayLinkedList(head);
	
}



