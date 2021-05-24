#include<iostream>
using namespace std;
class stack{
	private:
		int top;
		int size;
		int *s;
	public:
		stack(int s);
		void push(int x);
		int pop();
		bool isEmpty();
		bool isFull();
		void display();

};
stack::stack(int si){
	top = -1;
	size= si;
	s = new int[size];

}
void stack::push(int x){
	if(isFull()){
		cout<<"stack is Full"<<endl;
	}
	else{
		top++;
		s[top] == x;

	}
}
int stack::pop(){
	int x= -1;
	if(isEmpty()){
		cout<<"stack is Empty"<<endl;
	}
	else{
		x= s[top];
		top--;

	}
	return x;
}
bool stack::isEmpty(){
	if(top == -1){
		return true;
	}
	else{
		return false;
	}
}
bool stack::isFull(){
	if(top == size-1){
		return true;
	}
	else{
		return false;
	}
}
void stack::display(){
	if(isEmpty()){
		cout<<"stack is Empty"<<endl;
	}
	else{
		for(int i = top;i>=0;i--){
			cout<<s[i]<<endl;
		}

	}
}
int main(){
	 int A[] = {1,3,5,7,9};
  stack stk(sizeof(A)/sizeof(A[0]));
  for(int i=0;i<5;i++){
    stk.push(A[i]);
  }
  cout<<"Stack: ";
  stk.display();
}