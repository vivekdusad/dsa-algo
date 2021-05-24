
#include <bits/stdc++.h>
using namespace std;
struct node
{
	int data;
	struct node* next;
    node(int x){
        data=x;
        next=NULL;
    }

};
node* removeLoop(node*head){
    node*curr = head;
    node*after = head->next;
    unordered_set<node*> s;
    while (curr->next != NULL)
    {
        if(s.find(after->next) == s.end()){
            s.insert(after->next);
            curr = curr->next;
        }
        else{
            curr->next = NULL;
            
        }
    }
    return head;
    
}
void displayLinkedList(struct node* p) {

	while (p != NULL) {
		cout<<p->data;
		p = p->next;
	}

}
int main(){
    node *head=new node(15);
	head->next=new node(10);
	head->next->next=new node(12);
	head->next->next->next=new node(20);
	head->next->next->next->next=head->next;
    head  = removeLoop(head);
    displayLinkedList(head);
    
	

}