#include<iostream>
using namespace std;

class construct { 
    public: 
	    int a, b; 
	    // Default Constructor 
	    construct(){ 
            cout << "Default Constructor" << endl;
            a = 10; 
            b = 20; 
	    } 
        // Parameterised Constructor
        construct(int c,int d){
            cout << "Parameterised Constructor" << endl;
            a = c;
            b = d;
        }

}; 

int main() 
{ 
	construct c; 
    cout << "a: " << c.a << endl << "b: " << c.b << endl;

    construct a(100,200); 
    cout << "a: " << a.a << endl << "b: " << a.b << endl;

	return 0; 
} 
