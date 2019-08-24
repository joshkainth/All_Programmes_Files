#include<iostream>
using namespace std;
int binarysearch(int arr[],int beg, int end, int searchElement){
	
	int mid = (beg+end)/2;
	if(arr[mid] == searchElement){
		return mid;
	}
	
	if(arr[mid] > searchElement){
		return binarysearch(arr, beg, mid-1, searchElement);
	}
	else{
		return binarysearch(arr, mid+1, end, searchElement);
	}
	
	return -1;
}
int main(){
	int size = 10;
	int arr[size] = {2,5,6,7,12,15,25,36,49,55};
	//int n = sizeof(arr)/sizeof(arr[0]);
	cout << "Elements in array : \n";
	for(int i=0;i<10;i++){
		cout << arr[i] << "\t";
	}
	
	int searchElement;
	cout << "\nEnter the Element : ";
	cin >> searchElement;
	int mid = binarysearch(arr,0,size,searchElement);
	cout << "Element found at location : " << mid;
}
