#include<iostream>
using namespace std;

int main(){
    int a,b;
    char choice;
    do{
        cout << "Enter three inputs : ";
        cin >> a >> b;
        cout <<"Difference : " << (a^b) << endl;
        cout <<"Borrow : " << ((!a)&b) << endl;
        cout << "Do You want to Continue Y or N : ";
        cin >> choice;
    }while(choice == 'Y' || choice == 'y');

    return 0;
}