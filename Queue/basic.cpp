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
	front = -1;
	rear = -1;
	size = s;
	Q = new int[size];
}
int Queue::dequeue(){
	int x = -1;
	if(isEmpty()){
		cout<<"Queue empty"<<endl;

	}
	else{
		front++;
		x = Q[front];

	}
	return x;
}
void Queue::enqueue(int x){
	if(isFull()){
		cout<<"Queue full"<<endl;
	}
	else{
		rear++;
		Q[rear]=x;
	}
}
bool Queue::isFull(){
	if(rear == size-1){
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
		for(int i = front+1;i<=rear;i++){
			cout<<Q[i]<<" ";
		}
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