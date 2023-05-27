#include<iostream>
#include<algorithm>
#include<string>
#include<map>
#include<vector>
using namespace std;

int main(){
    int t; cin>>t;
     while(t--){
        string s; cin>>s;
        map<int,vector<int> >m;
        for(int i=1;i<s.length()-1;i++){
            m[s[i]-'a'+1].push_back(i+1);
        }
        int st=s[0]-'a'+1;
        int jump=0,sum=0,sum2=0,jump2=0;
        int prev=s[s.length()-1]-'a'+1;
        int prev2=s[0]-'a'+1;
        jump+=m[st].size();
        jump2=jump;
        for(auto it:m){
            if(it.first<st){
                jump+=it.second.size();
                sum+=abs(it.first-prev);
                prev=it.first;
            }else if(it.first>st){
                jump2+=it.second.size();
                sum2+=abs(it.first-prev2);
                prev2=it.first;
            }
        }
        sum+=abs(prev-(s[0]-'a'+1));
        sum2+=abs(prev-(s[s.length()-1]-'a'+1));
        jump+=2;
        jump2+=2;
        if(jump>jump2){
            cout<<sum<<" "<<jump<<"\n";
        }else{
            cout<<sum2<<" "<<jump2<<"\n";
        }
        // sum+=abs(s[s.length()-1]-'a'+1-st);
        cout<<"1 ";
        for(auto it:m){
            for(auto it2:it.second)
            cout<<it2<<" ";
        }
        cout<<s.length()<<"\n";
     }
}