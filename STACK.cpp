#include<iostream>
using namespace std;
#define n 100

class stack{
	int* arr;
	int top;
	public:
		stack(){
			arr= new int[n];
			top=-1;
		}
		void push(int x){
			if(top==n-1){ //check wheather the element is in last position(is stack full)
				cout<<"stack overflow"<<endl;
				return;				
			}
			top++;
			arr[top]=x;
		}
		void pop(){
			if(top==-1){
				cout<<"No elements to pop"<<endl;
				return; 
			}
			top = top -1;
		}
		int Top(){
			if(top ==-1){
				cout<<"No element to pop"<<endl;
				return -1;
			}
			return arr[top];
		}
		bool empty(){
			return top==-1; 
		}
};

int main(){
	/* OPERATION IN STACK
	 push()
	 pop()
	 top()
	 empty()
	 */
	 stack st;
	 st.push(1);
	 st.push(3);
	 st.push(2);
	 cout<<st.Top()<<endl;
	 st.pop();
	 
	 return 0;
	 
	 
}
