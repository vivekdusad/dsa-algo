
#include <bits/stdc++.h>
using namespace std;

struct node{

    int data;
    node* next;
    node(int d){
        data=d;
        next=NULL;
    }
};

node *insertBegin(node* head,int x){

    node* p = head;
    node* temp = new node(x);

    

    while (p->next != head)
    {
        p = p->next;
    }
    p->next = temp;
    temp->next = head;
    head = temp;

    return head;

    

}
void printlist(node *head){
    if(head==NULL)return;
    node *p=head;
    do{
        cout<<p->data<<" ";
        p=p->next;
    }while(p!=head);
}

////effecient method


node* effecient(node* r,node* head,int x){

    node* rear = r;
    node* temp = new node(x);
    rear->next = temp;
    temp->next = head;

    head = temp;

    return head;


}
node* insert(node*head,int x){

    if(head == NULL){
        head->data = x;
        head->next = head;

    }
    else{

        node* temp = new node(x);
        temp->next = head->next;
        head->next = temp;

        swap(head->data,temp->data);

    }
    return head;

}
int middle(node*head){
    if(head == NULL){

        return -1;
    }
    else{
        node*fast = head;
        node* slow = head;

        while (fast->next != head)
        {
            fast = fast->next->next;
            slow = slow->next;
        }
        return slow->data;
        
    }
}



int main(){

	node *head=new node(10);
	head->next=new node(20);
	head->next->next=new node(30);
	head->next->next->next=head;
    node* rear =head->next->next;
	// head = insert(head,15);
	// printlist(head);
    cout<<middle(head);
	return 0;

}