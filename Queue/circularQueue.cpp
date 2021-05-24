#include<iostream>
using namespace std;
class Queue{
public:
	int front;
	int rear;
	int size;
	int *Q;
	Queue(int s);
	void enqueue(int x);
	int dequeue();
	bool isEmpty();
	bool isFull();
	void display();
};
Queue::Queue(int s){
	front = 0;
	rear = 0;
	size = s+1;
	Q = new int[size];
}
int Queue::dequeue(){
	int x = -1;
	if(isEmpty()){
		cout<<"Queue empty"<<endl;

	}
	else{
		front  = (front+1)%size;
		x = Q[front];

	}
	return x;
}
void Queue::enqueue(int x){
	if(isFull()){
		cout<<"Queue full"<<endl;
	}
	else{
		rear = (rear+1)%size;
		Q[rear]=x;
	}
}
bool Queue::isFull(){
	if((rear+1)%size == front){
		return true;

	}
	else{
		return false;
	}
}
bool Queue::isEmpty(){
	if(front == rear){
		return true;

	}
	else{
		return false;
	}
}
void Queue::display(){
	if(isEmpty()){
		cout<<"Queue is Empty"<<endl;
	}
	else{
		int i = front+1;
		do{
			cout<<Q[i]<<endl;
			i = (i+1)%size;
		}
		while(i !=(rear+1)%size);
	}

}
int main(){
	Queue q(5);
	q.enqueue(10);//adding to Queue
	q.enqueue(20);//adding to Queue
	q.enqueue(30);//adding to Queue
	q.enqueue(40);//adding to Queue
	q.enqueue(80);//adding to Queue

	q.display();//displaying Queue
	q.dequeue();
	q.display();//displaying Modified Queue

}