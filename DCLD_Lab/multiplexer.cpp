#include<iostream>
using namespace std;

int main(){
    int a,b,c,d;
    char choice;
    do{
        cout << "Enter four inputs : ";
        cin >> a >> b >> c >> d;
        cout <<"Output : " << (((!b)&(!c))|((!a)&(!b)&(!d))|(b&c&d)|(a&b&c)) << endl;
        cout << "Do You want to Continue Y or N : ";
        cin >> choice;
    }while(choice == 'Y' || choice == 'y');

    return 0;
}