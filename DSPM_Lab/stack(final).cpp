lo#include<iostream>
#define size 5
using namespace std;
int top=-1, stack[size];
void push(int newElement){	
	if(top==size-1){
		cout << "Stack is Full";
	}
	else{
		top=top+1;
		stack[top]= newElement;
	}
}
 
void pop()
{
	if(top==-1){
		cout << "\nStack is empty!!";
	}
	else{
		cout <<"\nDeleted element is " << stack[top];
		top=top-1;
	}
}
 
void display(){
	int i;
	if(top==-1){
		cout <<"\nStack is empty!!";
	}
	else{
		cout << "\nStack is...\n";
		for(i=top;i>=0;--i)
			cout << stack[i] <<"\t";
	}
	cout << endl;
}
int main(){
	int choice;
	int newElement;
	while(1){
		cout << "Select Your Choice : "<<endl;
		cout << "1.Push \n 2. Pop\n 3.Display\n 4.Exit" << endl;
		cout << "Enter Your Choice : ";
		cin >> choice;
		//cout << endl;
		switch(choice){
			case 1: {
				cout << "Enter new Element  : ";
				cin >> newElement;
				push(newElement);
				break;
			}
			case 2: pop();
				break;
			case 3: display();
				break;
			case 4: exit(0);
				break;
			default : cout << "Invalid Choice";
				break;	
		}
	}
}
