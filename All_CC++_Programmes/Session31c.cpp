#include<iostream>
#include<string>

using namespace std;

// SINGLE-LEVEL
class CA{

};

class XA{

};

class CB : public CA{

};

//    CA
//    |
//    CB  

// MULTI-LEVEL
class CC : public CB{

};

//    CA
//    |
//    CB 
//    |
//    CC

// HIERARCHY
class CD : public CA{

};

//    CA
//    |
// CB   CD

// MULTIPLE
class CE : public CA, public XA{

};

//    CA    XA
//        |  
//       CE

// HYBRID
/*
    A
    |
    B
    |
  C   D
    | |
    E F


*/

// WRITE PROGRAMS like Session31a.cpp in all three modes