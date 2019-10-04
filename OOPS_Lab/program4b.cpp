#include<iostream>
using namespace std;

int main(){
	int i,items,cd,sum=0,count;
	cout << "Enter the Number from whaere you want to start : ";
	cin >> i;
	cout << "Enter the number of items for A.P Series : ";
	cin >> items;
	cout << "Enter the Common Difference of the A.P Series : ";
	cin >> cd;

	for(count=1;count<=items;count++){
		cout << i <<"+";
		sum +=i;
		i += cd;
	}
	
	cout << "\b = " << sum;
	return 0;
}
