#include<iostream>
using namespace std;

int main(){
	int i,items,cd,sum=0,count;
	cout << "Enter the Number from whaere you want to start : ";
	cin >> i;
	cout << "Enter the number of items for G.P Series : ";
	cin >> items;
	cout << "Enter the Common Ratio of the G.P Series : ";
	cin >> cd;

    cout << "The Numbers for G.P Series : " << endl;
	for(count=1;count<=items;count++){
		cout << i <<" ";
		sum +=i;
		i *= cd;
	}
	
	cout << "\nSum of G.P Series = " << sum;
	return 0;
}
