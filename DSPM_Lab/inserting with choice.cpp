#include<iostream>
using namespace std;
int main(){
	/*int size;
	cout << "Enter the Size of array : ";
	cin >> size;
	int arr[size];
	for(int i=0;i<size;i++){
		cout << "Enter element at " << i << ": ";
		cin >> arr[i];
	} */
	int size=5;
	int arr[size] = {45,25,65,95,85};
	for(int i=0;i<size;i++){
		cout << arr[i] << "\t";
	} 
	
	cout << endl<< endl;
	
	cout << "1. You want insert element at Particular Postion or \n";
	cout << "2. Insert as Last Element in List..... \n";
	int choice;
	cout << "Please Select Choice for Insertion : ";
	cin >> choice;
	
	if(choice==1){
		int newElement,position;
		cout << "Enter New Element : ";
		cin >> newElement;
		cout << "Enter Position Where u want to insert : ";
		cin >> position;	
	
		cout << endl;
	
		int j =size;
		for(j=size;j>=position;j--){
			arr[j+1] = arr[j];
		}
		
		arr[position] = newElement;
		size = size+1;
	
		for(int i=0;i<size;i++){
			cout << arr[i] << "\t";
		} 
	}
	
	else if(choice==2){
		int newElement;
		cout << "Enter New Element : ";
		cin >> newElement;
		
		size = size+1;
		arr[size] = newElement;
		
		for(int i=0;i<size;i++){
			cout << arr[i] << "\t";
		}
	}
	else
		cout << "You Have not entered Choice";
}
