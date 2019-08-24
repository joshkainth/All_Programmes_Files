#include<iostream>
using namespace std;
int main(){
	int size=5;
	int arr[size] = {45,25,65,95,85};
	cout << "Elements in Array : \n";
	for(int i=0;i<size;i++){
		cout << arr[i] << "\t";
	} 
	cout << endl << endl;
	int newElement;
	cout << "Enter New Element : ";
	cin >> newElement;
		
	cout << endl;
	cout << "Choices for Insertion : \n";
	cout << "1. You want insert element at Particular Postion or \n";
	cout << "2. Insert as Last Element in List..... \n"<<endl;
	int choice;
	cout << "Please Select Choice for Insertion : ";
	cin >> choice;
	cout << endl;
	
	if(choice==1){
		int position;
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
		
		arr[size] = newElement;
		size = size+1;
		
		for(int i=0;i<size;i++){
			cout << arr[i] << "\t";
		}
	}
	else
		cout << "You Have not entered any Choice";
}
