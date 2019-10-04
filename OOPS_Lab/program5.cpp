#include<iostream>
using namespace std;

class toFindArea{
	public:
		int length;
		int breath;
		int area;
		//void areaofRectangle(int len, int bth);
		void areaofSquare(int len, int bth);
	
	void areaofRectangle(int len, int bth){
		area = len*bth;
		cout << "Area of Rectangle : " << area<< endl;
	}
	
};
void toFindArea :: areaofSquare(int len, int bth){
	if(len == bth){
		area = len*bth;
		cout << "Area of Square : " << area << endl;
	}
	else
		areaofRectangle(len,bth);
}

int main(){
	toFindArea T1;
	cout << "Enter The Length : ";
	cin >> T1.length;
	cout << "Enter The Breath : ";
	cin >> T1.breath;
	
	//T1.areaofRectangle(T1.length,T1.breath);
	T1.areaofSquare(T1.length,T1.breath);
	
	return 0;
}
