#include<iostream>
#include<string>

using namespace std;

// Collection of Constants (SYMBOLIC CONSTANTS)
//           0       1        2     3
enum CARDS {SPADE, DIAMOND, HEART, CLUB};
enum WEEK {SUNDAY, MONDAY, TUESDAY};

int main()
{
    
    CARDS card;
    card = HEART;

    cout<<"Card is: "<<card+1<<"\n";

    return 0;
}
