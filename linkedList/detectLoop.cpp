
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
Node* createLoop(Node*p){
    Node*head = p;
    while (p->next != NULL) {
		
		p = p->next;
	}
    p->next = head->next->next;
    return head;

}
bool detectLoop(Node* head){
    unordered_set<Node*> detect;
    while (head != NULL)
    {
        if(detect.find(head->next) == detect.end()){
            detect.insert(head->next);
            
        }
        else{
            return true;
        }
    }
    return false;
    
}
bool isLoop1  (Node*head){

    Node*temp = new Node(0);
    Node*curr = head;
    
    while (curr != NULL)
    {
        if(curr->next == NULL){
        return false;
    }
    if(curr->next == temp){
        return true;
    }
        Node*curr_next = curr;
        curr->next = temp;
        curr = curr_next;
    }
    return false;
    
}
//////USING FLOYD CYCLE DETECTION

bool isLoop(Node*head){
    Node*slow = head;
    Node*fast = head;
    while (fast != NULL&& fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
        if(fast == slow){
            return true;
        }

    }
    return false;
    
}

int main() {
	Node *head=new Node(15);
	head->next=new Node(10);
	head->next->next=new Node(12);
	head->next->next->next=new Node(20);
	head->next->next->next->next=head->next;
	if (isLoop(head)) 
        cout << "Loop found"; 
    else
        cout << "No Loop"; 
	return 0;
	
}



