
#include <bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node* prev;
    node*next;
};
node* head = NULL;
void insert(int newdata) {
   struct node* newnode = new node;
   newnode->data = newdata;
   newnode->prev = NULL;
   newnode->next = head;
   if(head != NULL)
   head->prev = newnode ;
   head = newnode;
}
void display() {
    node* ptr;
    ptr = head;
    while(ptr != NULL) {
      cout<< ptr->data <<" ";
      ptr = ptr->next;
    }
}

node* rotate(int k){

    if(head == NULL){
        return NULL;
    }
    if(head->next == NULL){
        return head;
    }
    node*q  = NULL;
    node* p = head;
    while (p->next != NULL)
    {
         p = p->next;
    }
    node*tail = p;
    // cout<<"Tail"<<tail->data;
    
    p = head->next;

    

    for(int i=0;i<k;i++){
        q = p->prev;
        q->next = NULL;
        tail->next= q;
        tail = q;
        p =p->next;
    }
    p =p->prev;
    // cout<<"Q"<<q->data<<endl;
    head = p;
    return head;

}


int main(){
    
    insert(3);
    insert(1);
    insert(7);
    insert(2);
    insert(9);

    display();
    cout<<endl;
    rotate(2);
    display();

}