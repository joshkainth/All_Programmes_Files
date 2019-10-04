#include<iostream>
using namespace std;
void output(int ip1, int ip2, int ip3){
	int sum, carry;
	if(ip1 == 0 && ip2 == 0 && ip3 == 0){
		sum = 0;
		carry = 0;
	}
	if(ip1 == 0 && ip2 == 0 && ip3 == 1){
		sum = 1;
		carry = 0;
	}
	if(ip1 == 0 && ip2 == 1 && ip3 == 0){
		sum = 1;
		carry = 0;
	}
	if(ip1 == 0 && ip2 == 1 && ip3 == 1){
		sum = 0;
		carry = 1;
	}
	if(ip1 == 1 && ip2 == 0 && ip3 == 0){
		sum = 1;
		carry = 0;
	}
	if(ip1 == 1 && ip2 == 0 && ip3 == 1){
		sum = 0;
		carry = 1;
	}
	if(ip1 == 1 && ip2 == 1 && ip3 == 0){
		sum = 0;
		carry = 1;
	}
	if(ip1 == 1 && ip2 == 1 && ip3 == 1){
		sum = 1;
		carry = 1;
	}
	cout << "Sum : " << sum <<endl;
	cout << "Carry : " << carry << endl;
}

int main(){
	int a,b,c;
	cout << "Enter three inputs : ";
	cin >> a >> b >> c;
	
	output(a,b,c);
}
