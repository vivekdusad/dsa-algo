
#include <bits/stdc++.h>
using namespace std;


struct Node
{
	int data;
	struct Node* next;
    Node(int x){
        data=x;
        next=NULL;
    }


}*First = NULL;
//Create linked list
Node* createLinkedList(int A[], int n) {
	struct Node* p, * linked;
	First = new Node(A[0]);
	
	First->next = NULL;
	linked = First;
	for (int i = 1; i < n; i++) {
		p = new Node(A[i]);
		
		p->next = NULL;
		linked->next = p;
		linked = p;
	}
    return First;
}
void displayLinkedList(struct Node* p) {

	while (p != NULL) {
		cout<<p->data;
		p = p->next;
	}

}
///Method-1
Node* pairSwap(Node*head){
    Node* curr = head;
    Node* after = head->next;
    while (curr->next != NULL)
    {
        if(curr->next->next == NULL){
            swap(after->data,curr->data);
            break;
        }
        
        swap(after->data,curr->data);
        curr = curr->next->next;
        after = curr->next;
        


        
    }
    return head;
    

}
Node* pairLinks(Node* head){
    Node* curr = head;
    Node* after = curr->next;

    while (curr->next != NULL)
    {

        if(curr->next->next == NULL){
            curr->next = NULL;
            after->next = curr;
            break;
        }
        curr->next = after->next;
        after->next = curr;

        curr = curr->next;
        
    }

    return head;
    
    

}

int main(){
    int A[5] = { 1,2,3,4,5, };
	int n = 5;
	Node* head = createLinkedList(A, n);//Linked list created
	displayLinkedList(head);//
    cout<<endl;
    head = pairLinks(head);
    displayLinkedList(head);

}