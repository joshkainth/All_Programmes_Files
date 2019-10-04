#include<iostream>
using namespace std;

int main(){
	int firstNum, secondNum;
	cout << "Enter the First Number : ";
	cin >> firstNum;
	cout << "Enter the Second Number : ";
	cin >> secondNum;
	cout << endl;
	int add = firstNum + secondNum;
	cout << "Addition of two Number : " << add <<endl;
	cout << endl;
	int sub = firstNum - secondNum;
	cout << "Substraction of two Number : " << sub <<endl;
	cout << endl;
	int mul = firstNum * secondNum;
	cout << "Multiplication of two Number : " << mul <<endl;
	cout << endl;
	int div = firstNum / secondNum;
	cout << "Division of two Number : " << div <<endl;
	cout << endl;
	int mod = firstNum % secondNum;
	cout << "Modulus of two Number : " << mod <<endl;
	cout << endl;
	int increment = (++firstNum) + (++secondNum);
	cout << "Addition of Two Number by adding 1 to both Number : " << increment <<endl;
	cout << endl;
	int decrement = (--firstNum) + (--secondNum);
	cout << "Addition of Two Number by substracting 1 from both Number : " << decrement <<endl;
	cout << endl;
	(firstNum > secondNum) ? cout << "First Number is greater" : cout << "Second Number is greater";
	cout << endl << endl;
	int bitwiseOr = firstNum ^ secondNum;
	cout << "Bitwise Or : " << bitwiseOr <<endl;
	cout << endl;
	int bitwiseAnd = firstNum & secondNum;
	cout << "Bitwise And : " << bitwiseAnd <<endl;
	cout << endl;
	int LeftShift = firstNum << 2;
	cout << "Left Shift : " << LeftShift <<endl;
	cout << endl;
	int RightShift = firstNum >> 2;
	cout << "Right Shift : " << RightShift <<endl;
	cout << endl;
	
	return 0;
}
