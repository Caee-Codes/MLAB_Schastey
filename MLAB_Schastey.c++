    // CSC 134
    // M1LAB
    // Caeley
    // sep11

#include <iostream>
using namespace std;

int main() {
    //cout << "Hello World!" << endl;
    string name = "Caeley";
    int apples = 255;
    double pricePerApple = 0.25;

    cout << "Welcome to " << name;
    cout << "'s apple farm" << endl;

    cout << " We have " <<  apples  <<
     " apples for sale " << 
    endl;

    cout << "The price per apple is $" << pricePerApple << " each " << endl; 

    // now calculate total price
    double totalprice = (double) apples * pricePerApple;

    cout << "The total cost of all the apples is $" << totalprice << endl; 

}