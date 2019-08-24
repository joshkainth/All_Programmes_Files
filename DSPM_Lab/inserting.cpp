#include<iostream>
using namespace std;
int main(){
	int size=5;
	int arr[size] = {45,25,65,95,85};
	for(int i=0;i<size;i++){
		cout << arr[i] << "\t";
	} 
	
	cout << endl<< endl;
		
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
