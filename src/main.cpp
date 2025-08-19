#include <iostream>
#include <iomanip>
#include <cstring>
#include <cstdlib>
#include <cmath>

using namespace std;

class Myclass
{
    int x;
    public:
        void set_x(int i){x = i;}
        int get_x(){return x;}
};

int main()
{
    Myclass obs[4];
    int i = 0;

    for (i = 0; i < 4; i++)
    {
        obs[i].set_x(i);
    }

    for (i = 0; i < 4; i++)
    {
        cout << "obs["<<i<<"].x= "<<obs[i].get_x()<<endl;
        
    }
   
    return 0;
}
