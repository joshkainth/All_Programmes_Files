#include<iostream>
using namespace std;
int main(){
	int a = sizeof(int);
	int g = sizeof(short int);
	int h = sizeof(long int);
	int l = sizeof(unsigned);
	int m = sizeof(signed);
	
	int c = sizeof(float);
	
	int b = sizeof(double);
	int f = sizeof(long double);
	
	int e = sizeof(char);
	int j = sizeof(unsigned char);
	int k = sizeof(signed char);
	int d = sizeof(string);
	
	int i = sizeof(bool);
	cout << "Size of Int : " << a << endl;
	cout << "Size of short int : " << g << endl;
	cout << "Size of Long int : " << h << endl;
	cout << "Size of Unsigned : " << l << endl;
	cout << "Size of Signed : " << m << endl;
	cout << "Size of Float : " << c << endl;
	cout << "Size of Double : " << b << endl;
	cout << "Size of Long Double : " << f << endl;
	cout << "Size of Char : " << e << endl;
	cout << "Size of Unsigned Char : " << j << endl;
	cout << "Size of Signed Char : " << k << endl;
	cout << "Size of String : " << d << endl;
	cout << "Size of Boolean  : " << i << endl;
}
