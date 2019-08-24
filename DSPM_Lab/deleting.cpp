#include<iostream>
using namespace std;
int main(){
	int size = 5,i;
	int arr[size] = {45,15,25,35,65};
	
	for(i=0;i<size;i++){
		cout << arr[i] << "\t";
	} 
	
	cout << endl <<endl;
	
	int position;
	cout << "Enter position of element u want to delete : ";
	cin >> position;
	
	cout <<endl;
	
	int item = arr[position];
	int j = size;
	for(j=position;j<size;j++){
		arr[j] = arr[j+1];
	}
	
	size = size-1;
	for(i=0;i<size;i++){
		cout << arr[i] << "\t";
	} 
}
