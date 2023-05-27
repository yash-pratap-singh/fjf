#include <iostream>
#include <vector>
#include <map>
#include <climits>
#include <algorithm>
#include <math.h>
#include <queue>
#include <stack>
#define pb push_back
#define vi vector<int>
#define ll long long
using namespace std;

bool isPrime(int n){
    for(int i=2;i<=(sqrt(n));i++){
       if((n%i)==0)
        return false;
    }
    return true;
}

void solve(string s){
    
    for(int i=0;i<s.length();i++){
            if (s[i]=='1' or s[i] == '4' or s[i] == '6' or s[i] == '8' or s[i] == '9')
        {
            cout<<"1\n";
            cout << s[i] << "\n";
            return;
        }
    }

            int n;
    for(int i=0;i<s.length()-1;i++){
        for(int j=i+1;j<s.length();j++){
            n=s[i]-'0';
            n*=10;
            n+=s[j]-'0';
            if(!isPrime(n)){
                cout<<"2\n";
                cout<<n<<"\n";
                return;
            }
        }
    }

}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int k;
        cin >> k;
        string s;
        cin >> s;
       solve(s);
    }
}