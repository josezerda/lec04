#include <iostream>
#include <iomanip>
#include <cstring>
#include <cstdlib>
#include <cmath>

using namespace std;

// Declare a vehicle class
class Myclass
{
public:
    int x;

    Myclass(int i);     //Declare constructor
    ~Myclass();     // Declare destuctor
   
};

//Implement the constructor and destructor

Myclass::Myclass(int i)
{
    x = i;
    cout << "Constructor.." << endl;
}
Myclass::~Myclass()
{
    cout << "Destucting objects whose x value is " << x << endl;
}





int main()
{
    Myclass t1(5);
    Myclass t2(19);

    cout << "Valores de x en t1 y t2: " << t1.x << " " << t2.x << endl;
    
    return 0;
}
