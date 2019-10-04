#include<iostream>
using namespace std;

int main(){
	int arr[10],i;
	int number;
	cout << "Enter Decimal Number : ";
	cin >> number;
	for(i=0;number>0;i++){
		arr[i] = number%2;
		number = number/2;
	}
	cout << "After Conversion from Decimal To Binary : ";
	
	for(i=i-1;i>=0;i--){
		cout << arr[i];
	}
	
}
