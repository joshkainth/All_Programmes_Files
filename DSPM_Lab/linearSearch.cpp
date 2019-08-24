#include<iostream>
using namespace std;
int linearsearch(int arr[],int size, int searchElement){
	for(int i=0;i<=size-1;i++)
		if(arr[i]==searchElement)
			return i;
	
	return -1;
}
int main(){
	int size = 10;
	int arr[size] = {2,5,6,7,12,15,25,36,49,55};
	cout << "Elements in array : \n";
	for(int i=0;i<10;i++){
		cout << arr[i] << "\t";
	}
		
	int searchElement;
	cout << "\nEnter the Element : ";
	cin >> searchElement;
	int mid = linearsearch(arr,size,searchElement);
	if(mid== -1)
		cout << "Element Not Found";
	else
		cout << "Element Found at Location : " << mid;
}
