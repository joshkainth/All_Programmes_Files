#include<iostream>
#include<string>

using namespace std;

// Parent:   Cab
// Children: UberGo, UberPremier, UberMoto
// Hierarchy

class Cab{

    int fare;

    public:

    Cab() : fare(100){
       cout<<"Cab Object Created\n";
    }

    virtual void bookCab(string source, string destiniation){
        cout<<"Cab Booked from "<<source<<" to "<<destiniation<<"\n";
        cout<<"Please Pay: Rs."<<fare<<"\n";
    }

    int getBaseFare(){
        return fare;
    }

};

// IS-A
// UberPremier IS-A Cab 
class UberPremier : public Cab{

    int fare;

    public:

    UberPremier() {
        fare = getBaseFare() + 50;
        cout<<"UberPremier Object Created\n";
    }

    // OVER-RIDING
    // Re-Define the same function of parent with same name, return type and inputs in child
    void bookCab(string source, string destiniation){
        cout<<"UberPremier Booked from "<<source<<" to "<<destiniation<<"\n";
        cout<<"Please Pay: Rs."<<fare<<"\n";
    }

};

// UberGo IS-A Cab
class UberGo : public Cab{

    int fare;

    public:

    UberGo() {
        fare = getBaseFare() + 20;
        cout<<"UberGo Object Created\n";
    }

    // OVER-RIDING
    // Re-Define the same function of parent with same name, return type and inputs in child
    void bookCab(string source, string destiniation){
        cout<<"UberGo Booked from "<<source<<" to "<<destiniation<<"\n";
        cout<<"Please Pay: Rs."<<fare<<"\n";
    }

};

// UberMoto IS-A Cab
class UberMoto : public Cab{

    int fare;

    public:

    UberMoto() {
        fare = getBaseFare() - 50;
        cout<<"UberMoto Object Created\n";
    }

    // OVER-RIDING
    // Re-Define the same function of parent with same name, return type and inputs in child
    void bookCab(string source, string destiniation){
        cout<<"UberMoto Booked from "<<source<<" to "<<destiniation<<"\n";
        cout<<"Please Pay: Rs."<<fare<<"\n";
    }

};




int main(){

    // Static Object Construction
    // Object is created in Stack
    //Cab cab;
    //cab.bookCab("Country Homes", "Pristine Magnum");

    /*
    UberPremier upCab;
    upCab.bookCab("Country Homes", "Pristine Magnum");

    UberGo ugCab;
    ugCab.bookCab("Country Homes", "Pristine Magnum");

    UberMoto umCab;
    umCab.bookCab("Country Homes", "Pristine Magnum");
    */

   // Dynamic Object Construction
   // cPtr is created in stack and object is created in Heap
   // cPtr will hold the address of object which is created in heap
   
   //Cab *cPtr = new Cab();
   //cPtr->bookCab("Country Homes", "Pristine Magnum");

   // Polymorphic Statement
   Cab *cPtr = new UberPremier();
   cPtr->bookCab("Country Homes", "Pristine Magnum");

   cPtr = new UberGo();
   cPtr->bookCab("Country Homes", "Pristine Magnum");


   cPtr = new UberMoto();
   cPtr->bookCab("Country Homes", "Pristine Magnum");

}