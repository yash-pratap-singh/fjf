#include <iostream>
#include<algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, b, x, y;
        cin >> n >> b >> x >> y;
        int a[n];
        a[0] = 0;
        long long int sum = 0;
        for (int i = 1; i <= n; i++)
        {
            a[i]=a[i-1]-y;
            if(a[i]>b)
            a[i]=0;
            
        }
        for(int i=0;i<=n;i++){
            sum+=a[i];
        }
        cout << sum << endl;
    }
}