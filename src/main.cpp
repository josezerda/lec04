#include <iostream>
#include <iomanip>
#include <cstring>
#include <cstdlib>
#include <cmath>

using namespace std;

class P_example
{
    int num;
public:
    void set_num(int val) {num = val;}
    void show_num() { cout << num << endl;}
};

int main()
{
    P_example ob, *p;   //declare an object and pointer to it

    ob.set_num(6);  // call functions directly on "ob"
    ob.show_num();

    p = &ob;        //assign p the address of ob
    p->set_num(20);
    p->show_num();

    return 0;
}

