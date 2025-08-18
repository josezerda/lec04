#include <iostream>
#include <iomanip>
#include <cstring>
#include <cstdlib>
#include <cmath>

using namespace std;

// Declare a vehicle class
class Vehicle
{
public:
    int passengers;
    int fuelcap;
    int mph;

    Vehicle(int p, int f, int m);     //Declare constructor
    ~Vehicle();     // Declare destuctor

    int range();    //compute and return the range
};

//Implement the constructor
Vehicle::Vehicle(int p, int f, int m)
{
    passengers = p;
    fuelcap = f;
    mph = m;
    cout << "Constructor.." << endl;
}
//Implement destructor
Vehicle::~Vehicle()
{
    cout << "Destucting objects.. " << endl;
}

inline int Vehicle::range()
{
    return fuelcap * mph;

}

int main()
{
    int rango;
    // Pass values to Vehicle constructor
    Vehicle minivan(7, 16, 21);
    Vehicle sportscar(2, 14, 12);

    cout << "Minivan range: " << minivan.range() << " / Sportscar range: " << sportscar.range() << endl;
    return 0;
}
