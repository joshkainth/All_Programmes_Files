#include<iostream>
#include<string>

// Objective
// To understand how we copy daa of one object into another

using namespace std;

class Dish{

    // Attributes : Property of Object
    string name;
    int price;
    int quantity;

    public:

    // Default Constructor
    Dish(){
        name = "NA";
        price = 0;
        quantity = 0;
    }

    // Parameterized Constructor
    Dish(string name, int price, int quantity){
        this->name = name;
        this->price = price;
        this->quantity = quantity;
    }

    // Function -> We are setting the values directy
    void setDishDetails(string name, int price, int quantity){
        this->name = name;
        this->price = price;
        this->quantity = quantity;
    }

    // Function -> To take data from User as Input
    void getDishDataFromUser(){
        cout<<"Enter Dish Name:\n";
        cin>>name;
        cout<<"Enter Dish Price:\n";
        cin>>price;
        cout<<"Enter Dish Quantity:\n";
        cin>>quantity;
    }

    // Function -> To show data of Object
    void showDishDetails(){
        cout<<name<<" is priced at: "<<price<<" for quantity: "<<quantity<<"\n";
    }
};

class Order{

    // Attributes : Property of Object
    int oid;
    // HAS-A Relation : 1 to 1
    Dish dish; // default constructor will allocate default values
    
    public:

    Order(){
        oid = 0;
    }

    Order(int oid, Dish dish){
        this->oid = oid;
        this->dish = dish; // Copying data of 1 object into another using = operator
    }

    void setOrderDetails(int oid, Dish dish){
        this->oid = oid;
        this->dish = dish; // Copying data of 1 object into another using = operator
    }

    void showOrderDetails(){
        cout<<"Order ID: "<<oid<<"\n";
        dish.showDishDetails();
    }

};

int main(){
    
    //Dish myDish("Dal Makhani", 200, 1);
    
    //Dish yourDish;
    //yourDish.setDishDetails("Paneer Butter Masala", 300, 2);
    //yourDish.getDishDataFromUser();

    //cout<<"=============\n";

    //myDish.showDishDetails();
    //yourDish.showDishDetails();

    //Order order1;
    //order1.setOrderDetails(101, myDish);
    //order1.showOrderDetails();

    Dish oldDish("Dal Makhani", 200, 1);
    //Dish newDish; // NA 0 0 
    // Exactly before assignment : // NA 0 0 
    Dish newDish = oldDish; // Object Copy Operation (= assignment operator) attribute by attribute

    Dish johnsDish(oldDish); // Copy Constructor

    oldDish.showDishDetails();
    newDish.showDishDetails();
    johnsDish.showDishDetails();

    cout<<"oldDish Address is: "<<&oldDish<<"\n";
    cout<<"newDish Address is: "<<&newDish<<"\n";
    cout<<"johnsDish Address is: "<<&johnsDish<<"\n";


    return 0;
}
