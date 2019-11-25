#include<iostream>
#include<string>

using namespace std;

namespace Auribises
{
    float PI = 3.14;

    void hello(){
        cout<<"This is hello from Auribises\n";
    }

    class CA{
        int x;
        public:
        CA() : x(10){

        }
        void show(){
            cout<<"x in CA is: "<<x<<"\n";
        }
    };
} 

using namespace Auribises;
int main()
{
    /*
    Auribises::hello();
    Auribises::CA cObj;
    cObj.show();

    cout<<"PI is: "<<Auribises::PI<<"\n";
    */

    hello();
    CA cObj;
    cObj.show();

    cout<<"PI is: "<<PI<<"\n";

    return 0;
}
