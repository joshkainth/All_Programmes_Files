#include<iostream>
#include<string>

using namespace std;


/*class Shape{

    public:

    Shape(){
       cout<<"Shape Object Created\n";
    }

    virtual void draw(){
        cout<<"Drawing a Shape\n";
    }
};*/

class Shape{ // Abstract class -> We cannot create objects of it !!

    public:

    Shape(){
       cout<<"Shape Object Created\n";
    }

    // Pure Virtual Function
    // Rule
    virtual void draw() = 0;
    //virtual void hello() = 0;
};

class Circle : public Shape{

    public:

    Circle(){
       cout<<"Circle Object Created\n";
    }

    // Must be created in Child
    void draw(){
        cout<<"Drawing a Circle\n";
    }
};

class Rectangle : public Shape{

    public:

    Rectangle(){
       cout<<"Rectangle Object Created\n";
    }

    void draw(){
        cout<<"Drawing a Rectangle\n";
    }
};

class Triangle : public Shape{

    public:

    Triangle(){
       cout<<"Triangle Object Created\n";
    }

    void draw(){
        cout<<"Drawing a Triangle\n";
    }
};


int main(){

    Shape *sPtr;
    sPtr = new Circle();
    sPtr->draw();

    cout<<"\n";

    sPtr = new Rectangle();
    sPtr->draw();

    cout<<"\n";

    sPtr = new Triangle();
    sPtr->draw();

    //sPtr = new Shape();
    //sPtr->draw();

}

// Abstract Class : Having on a min of 1 pure virtual function and can have other functions 
// Interface      : Can have only and only pure virtual functions

// Both Abstract Class and Interface cannot have Objects

/*
Interfaces
Namespaces
Exception Handling
enumeration

Strings
File Handling

Templates
Pointers to Members of Object
int argc, char const *argv[]

*/