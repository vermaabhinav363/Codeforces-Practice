#include <bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;
 
int main()
 
{
 
#ifndef ONLINE_JUDGE
 
    freopen("input.txt", "r", stdin);
 
    freopen("output.txt", "w", stdout);
   
#endif
 
 	ll t;
    cin>>t;
    while(t--){
        string s,p;
        cin>>s>>p;
        string str="";
        string ptr ="";
        for(ll i =0;i<(ll)s.size();i++){
            str="";
            for(ll j =i;j<(ll)s.size();j++){
                str+=s[j];
                ptr = str;
                if(ptr==p){
                    cout<<"YES\n";
                    goto c;
                }  
                for(ll k=j-1;k>=0;k--){
                  if(ptr==p){
                    cout<<"YES\n";
                    goto c;
                  }  
                  ptr+= s[k];
                  if(ptr==p){
                    cout<<"YES\n";
                    goto c;
                  }  

                }
            }
        }
        cout<<"NO\n";
        c:;
    }
}
