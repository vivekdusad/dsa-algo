#include<iostream>
using namespace std;
class Node{
public:
	int data;
	Node *next;
};
class Queue{
public:
	Node * front;
	Node * rear;
	Queue();
	void enqueue(int x);
	int dequeue();
	bool isEmpty();
	bool isFull();
	void display();
};
Queue::Queue(){
	front = nullptr;
	rear = nullptr;

}
void Queue::enqueue(int x){
	Node *t = new Node;
	if(isFull()){
		cout<<"Queue is full"<<endl;

	}
	else{
		t->data = x;
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
int Queue::dequeue(){
	Node *t = new Node;

	int x = -1;
	if(isEmpty()){
		cout<<"Queue is empty"<<endl;

	}
	else{
		x = front->data;
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
        cout << p->data << flush;
        p = p->next;
        if (p != nullptr){
            cout << " <- " << flush;
        }
    }
    cout << endl;
}
int main(){
	Queue q;
	q.enqueue(5);
	q.enqueue(10);
	q.enqueue(15);
	q.enqueue(20);
	q.display();
	q.dequeue();
	q.display();
}

