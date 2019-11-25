#include<iostream>
#include<string>

using namespace std;

// Polymorphism
// 1. What is it ?
//    More than 1 forms  i.e. same function doing different work  
// 2. Types
//    2.1 Compile Time 
//        2.1.1. Function Overloading
//        2.1.2. Constructor Overloading
//        2.1.3. Operator Overloding  

//   2.2 Run Time
//      2.2.1 Overriding

class Google{

};

class Twitter{

};

class User{

    public:


    // COMPILE TIME POLYMORPHISM
    // Early Binding or Static Binding or static polymorphism
    // Linking of function call with definition is done by compiler at compile time
    // OVERLOADING : Same Function Name But Different Arguments/Inputs
    //               Return Type has no role to play
    //               RULES:
    //               1. Function name Should Be Same
    //               2. Inputs/Arguments must be UNIQUE
    //                  2.1 Number of Inputs
    //                  2.2 Type of Inputs
    //                  2.3 Sequence of Inputs
    //               3. Return Type has no role
    void loginUser(string email, string password){

    }

    /*
    int loginUser(string email, string password){

        return 10;
    }*/

    /*
    void loginUser(string myEmail, string myPassword){

    }*/

    void loginUser(string phone, int otp){

    }

    void loginUser(int otp, string phone){

    }

    void loginUser(Google google){ // definition

    }

    void loginUser(Twitter twitter){

    }

};

int main(){

    User user;
    user.loginUser("john@example.com", "john123");
    user.loginUser("+91 99999 11111", 3027);

    Google gAccount;
    Twitter tAccount;

    user.loginUser(gAccount); // call
    user.loginUser(tAccount);
    
    return 0;
}
