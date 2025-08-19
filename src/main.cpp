#include <iostream>
#include <iomanip>
#include <cstring>
#include <cstdlib>
#include <cmath>

using namespace std;

class Myclass
{
    int x, y;
    public:
        Myclass(int i, int j)
        {
            x = i;
            y = j;
            cout << "Constructor... x= "<< x << " y= " << y << endl;
        }
        void set_x(int i){x = i;}
        void set_y(int j){y = j;}
        int get_x(){return x;}
        int get_y(){return y;}
};

int main()
{
    Myclass obs[4][2] = {
        Myclass(1, 2), Myclass(3, 4),
        Myclass(5, 6), Myclass(7, 8),
        Myclass(9, 10), Myclass(11, 12),
        Myclass(13, 14), Myclass(15, 16)
        };
    int i;
    int j;

    for (i = 0; i < 4; i++)
    {
        for(j = 0; j < 2 ; j++)
        {
            cout << "obs["<<i<<"]["<<j<<"].x= "<<obs[i][j].get_x() << "  obs["<<i<<"]["<<j<<"].y= "<<obs[i][j].get_y() << endl;
        }
        
    }
   
    return 0;
}
