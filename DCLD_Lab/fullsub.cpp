#include<iostream>
using namespace std;

int main(){
    int a,b,c;
    char choice;
    do{
        cout << "Enter three inputs : ";
        cin >> a >> b >> c;
        cout <<"Difference : " << (a^b^c) << endl;
        cout <<"Borrow : " << (((!a)&c)|((!a)&b)|(b&c)) << endl;
        cout << "Do You want to Continue Y or N : ";
        cin >> choice;
    }while(choice == 'Y' || choice == 'y');

    return 0;
}