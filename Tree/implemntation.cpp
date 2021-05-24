#include<iostream>
using namespace std;
class NodeTree{
public:
	NodeTree *lchild;
	NodeTree *rchild;
	int data;
	
};
class Node{
public:
	NodeTree* d;
	Node *next;
};
class Queue{
public:
	Node * front;
	Node * rear;
	Queue();
	void enqueue(NodeTree* x);
	NodeTree* dequeue();
	bool isEmpty();
	bool isFull();
	void display();
};
Queue::Queue(){
	front = nullptr;
	rear = nullptr;

}
void Queue::enqueue(NodeTree* x){
	Node *t = new Node;
	if(isFull()){
		cout<<"Queue is full"<<endl;

	}
	else{
		t->d = x;
		t->next = NULL;
		if(front == NULL){
			front = t;
			rear = t;	


		}
		else{
			rear->next = t;
			rear = t;
		}
	}

}
NodeTree* Queue::dequeue(){
	Node *t = new Node;

	NodeTree* x = NULL;
	if(isEmpty()){
		cout<<"Queue is empty"<<endl;

	}
	else{
		x = front->d;
		front = front->next;
		
	}
		return x;
}
bool Queue:: isEmpty(){
	if(front =NULL){
		cout<<"Queue is empty"<<endl;
		return true;
	}
	else{
		return false;

	}

}
bool Queue:: isFull(){
	Node *t = new Node;
	if(t == NULL){
		return true;
	}
	else{
		return false;
	}
}
void Queue::display() {
    Node* p = front;
    while (p){
        cout << p->d << flush;
        p = p->next;
        if (p != nullptr){
            cout << " <- " << flush;
        }
    }
    cout << endl;
}
NodeTree * root;
void createTree(){
	Queue q;
	int x;
	cout<<"Enter root Element"<<endl;
	cin>>x;
	root = new NodeTree;
	root->data = x;
	root->lchild =NULL;
	root->rchild =NULL;
	q.enqueue(root);
	NodeTree* p;
	while(!q.isEmpty()){
		p= dequeue();
		cout<<"Enter element of Lchild"<<endl;
		cin>>x;
		if(x !=-1){
			NodeTree* t = new Node;
			t->data = x;
			t->lchild =NULL;
			t->rchild =NULL;
			q.enqueue(&t);
			p->lchild = t;
		}
		cout<<"Enter element of Rchild"<<endl;
		cin>>x;
		if(x !=-1){
			NodeTree* t = new Node;
			t->data = x;
			t->lchild =NULL;
			t->rchild =NULL;
			q.enqueue(&t);
			p->rchild = t;
		}
	}

}
int main(){
	createTree();
}