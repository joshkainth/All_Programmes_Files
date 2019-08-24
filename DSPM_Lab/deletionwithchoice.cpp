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
	cout << "Choices for Deletion : \n";
	cout << "1. Enter the Element which u want to delete or \n";
	cout << "2. Enter the position of element..... \n"<<endl;
	int choice;
	cout << "Please Select Choice for Insertion : ";
	cin >> choice;
	cout << endl;
	
	if(choice==1){
		int delElement;
		cout << "Enter the elements to be deleted : ";
		cin >> delElement;
		for(int i=0;i<size;i++){
			
			if(arr[i]==delElement){
				
			  for(int j=i;j<size;j++){
			  	arr[j]=arr[j+1];
			  	}
			  	break;
		}
	}
   	for(int i=0;i<(size-1);i++)
   	   {
   		cout<<arr[i]<<"\t";
	   }
	}
	
	else if(choice==2){
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
		for(int i=0;i<size;i++){
			cout << arr[i] << "\t";
		} 
	}
	else
		cout << "You Have not entered any Choice";
}
