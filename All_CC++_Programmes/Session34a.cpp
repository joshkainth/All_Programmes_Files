#include<iostream>
#include<string>

using namespace std;

// Exception Handling

void division(int a, int b){
    
    if(b == 0){
        throw "Illegal Division By ZERO"; // Throwing an Error Mesaage
    }else{
        int c = a/b;
        cout<<"Division is: "<<c<<"\n";
    }
}

int main()
{
    
    //string name = "John";

    cout<<"==Program Started==\n";

    int a = 0;
    int b = 0;
    
    cout<<"Enter Number 1:\n";
    cin>>a;

    cout<<"Enter Number 2:\n";
    cin>>b;

    try{
        division(a, b);
    }catch(const char* message){
        cout<<"OOPS!! Something Went Wrong !! "<<message<<"\n";
    }

    cout<<"==Program Finished==\n";


    return 0;
}

// Exception : Error which occurs at Run Time
//             When exception will come, program CRASHES
// Implement try, catch, throw to handle error at run time