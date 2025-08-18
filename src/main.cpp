#include <iostream>
#include <iomanip>
#include <cstring>
#include <cstdlib>
#include <cmath>

using namespace std;

// Declare a vehicle class
class Vehicle
{

    int passengers;
    int fuelcap;
    int mph;

    public:
    Vehicle(int p, int f, int m)
    {
        passengers = p;
        fuelcap = f;
        mph = m;
    }
    ~Vehicle(){}
    int range()
    {
        return fuelcap * mph;
    }
    int get_passengers()
    {
        return passengers;
    }
    int get_fuelcap()
    {
        return fuelcap;
    }
    int get_mph()
    {
        return mph;
    }
};


int main()
{

    // Pass values to Vehicle constructor
    Vehicle minivan(7, 16, 21);
    Vehicle sportscar(2, 14, 12);

    cout << "Minivan range: " << minivan.range() << endl;
    cout << "Minivan passengers: " << minivan.get_passengers() << endl;

    cout << "Sportscar range: " << sportscar.range() << endl;
    cout << "Sportscar mph: " << sportscar.get_mph() << endl;
    
    return 0;
}
