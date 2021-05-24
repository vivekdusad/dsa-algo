
#include <bits/stdc++.h>
using namespace std;

struct Node
{
	int data;
	struct Node* next;
    Node (int x){
	    data=x;
	    next=NULL;
	}


}*First = NULL;
//Create linked list
Node* createLinkedList(int A[], int n) {
	Node* p, * linked;
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
void displayLinkedList(Node* p) {

	while (p != NULL) {
		cout<<p->data;
		p = p->next;
	}
}

int intersection(Node*h1,Node*h2){

    unordered_set<Node*> s;
    while (h1 !=NULL&&h2 != NULL)
    {
        if(s.find(h1) == s.end()){
            s.insert(h1);
            
        }else{
            return h1->data;
        }

        if(s.find(h2) == s.end()){
            s.insert(h2);
        }
        else{
            return h2->data;
        }
        h1 = h1->next;
        h2 = h2->next;
    }
    return -1;
    

}

int main(){
    	/* 
		Creation of two linked lists 
	
		1st 3->6->9->15->30 
		2nd 10->15->30 
	
		15 is the intersection point 
	*/

	Node* newNode; 

	Node* head1 = new Node(10); 

	Node* head2 = new Node(3); 

	newNode = new Node(6); 
	head2->next = newNode; 

	newNode = new Node(9); 
	head2->next->next = newNode; 

	newNode = new Node(15); 
	head1->next = newNode; 
	head2->next->next->next = newNode; 

	newNode = new Node(30); 
	head1->next->next = newNode; 

	head1->next->next->next = NULL; 

	cout <<intersection(head1, head2);

}