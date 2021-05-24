
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

node *create(node* head,int x){

    if(head == NULL){
        head->data = x;
        head->next = NULL;
        return head;

    }else{
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

    

}
void printlist(node *head){
    if(head==NULL)return;
    node *p=head;
    do{
        cout<<p->data<<" ";
        p=p->next;
    }while(p!=head);
}
int middlenode(node*head,int x){

    
}

int main(){
    int x = 15;
    node* head = new node(15);

    head = create(head,20);
    

    printlist(head);

	

}