#include <iostream>
#include <math.h>
using namespace std;

// int dist(int x, int y){
//     int dist;
//     dist=sqrt()
// }

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y;
        cin >> x >> y;
        if (x == 0 && y == 0)
        {
            cout << '0' << endl;
        }
        else
        {
            int iVar;
            float fVar;
            fVar = sqrt(x * x + y * y);
            iVar = fVar;
            if (iVar == fVar)
            {
                cout << "1" << endl;
            }
            else
            {
                cout << "2" << endl;
            }
        }
    }
}