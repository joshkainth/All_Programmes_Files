#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int x;
	cout << "Enter the value : ";
	cin >> x;
	
	int result;
	float b = sqrt(x);
	//cout << b;
	result = pow(b-1,6) + pow(b+1,6);
	
	cout << "Result : " << result;
}
