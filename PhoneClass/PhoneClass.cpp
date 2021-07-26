// PhoneClass.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class Phone {
public:
    double cost;
    int slots;
};

int main()
{
    Phone Y6;
    Phone Y7;

    Y6.cost = 100.00;
    Y6.slots = 2;
    Y7.cost = 200.00;
    Y7.slots = 2;

    cout << "\n\tCost of Y6:\t" << Y6.cost << endl;
    cout << "\tCost of Y7:\t" << Y7.cost << endl;
    cout << "\tSlots in Y6:\t" << Y6.slots << endl;
    cout << "\tSlots in Y7:\t" << Y7.slots << endl;
}

