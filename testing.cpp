#include<iostream>
using namespace std;
void push(int arr[],int top,int size, int element){
	for(int i=0;i<=size-1;i++){
		if(arr[i] == -1){
			top = i;
		}
	}
	if(top==-1)
		cout << "Stack is Overflow";
	else {
		top++;
		arr[top] = element;
	}
	
	for(int i=0;i<=top;i++){
		cout << arr[i] << "\t";
	}
	
}
void pop(){
	
}

int main(){
	int size = 5;
	int arr[size] = {15,25,35,45};
	int top;
	
	int element;
	cout << "Enter the Element : ";
	cin >> element;
	
	int choice;
	cout << "Choice for Operation" << endl;
	cout << "1. Insert An Element in Stack (Push)" << endl;
	cout << "2. Delete An Element from Stack (Pop)" << endl;
	cout << "Enter Your Choice from 1-2 : ";
	cin >> choice;
	
	switch(choice){
		case 1: push(arr,top,size,element);
			break;
		case 2: pop();
			break;
		default: cout << "Invalid Choice";
			break;
	}
}
