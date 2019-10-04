#include <iostream>
using namespace std;

class person_detail{

    char name[100];
    int age;

    public:
        void input(){
            cout << "Enter Your Name : ";
            cin >> name;
            cout << "Enter your Age : ";
            cin >> age;
        }

        void output(){
            cout << "Person Details : "<< endl;
            cout << "Name : " << name << endl;
            cout << "Age : " << age << endl;
        }
};

class profession{

    char field[100];
    char speciality[100];
    char hobbies[150];

    public:
        void input(){
            cout << "Enter Your Profession : ";
            cin >> field;
            cout << "Enter your speciality : ";
            cin >> speciality;
            cout << "Enter your Hobbie : ";
            cin >> hobbies;
        }

        void output(){
            cout << "Profession : " << field << endl;
            cout << "Speciality : " << speciality << endl;
            cout << "Hobbies : " << hobbies << endl;
        }

};

class printing : public person_detail,public profession{
    public:
        void input(){
            person_detail :: input();
            profession :: input();
        }

        void output(){
            person_detail :: output();
            profession :: output();
        }

};

int main(){

    printing p1;
    cout << "Enter Your Details : " << endl;
    p1.input();
    cout << "Displaying Details : " << endl;
    p1.output();

    return 0;
}