#include <iostream>
#include <iomanip>
#include <cstring>
#include <cstdlib>
#include <cmath>

using namespace std;

class Sample
{
public:
int x;
int y;

//Overload the default constructor
Sample(){x = 0; y = 0;}

//Constructor with one parameter
Sample(int i){x = i; y = i;}

//Constructor with two parameters
Sample(int i, int j){x = i; y = j;}

};

int main()
{
    Sample t;       //invoke default constructor
    Sample t1(5);   //Use Sample(int)
    Sample t2(9,10);    //Use Sample (int, int)

    cout << "t.x: " << t.x << "   t.y: " << t.y << endl; 
    cout << "t1.x: " << t1.x << "   t.y: " << t1.y << endl; 
    cout << "t2.x: " << t2.x << "   t2.y: " << t2.y << endl; 

    return 0;
}

