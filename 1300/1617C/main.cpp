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
        ll n;
        cin>>n;
        ll arr[n];
        for(ll i=0;i<n;i++){
            cin>>arr[i];
        }
        sort(arr,arr+n);
        ll brr[n+1]={0};
        ll count =0;
        vector<ll> vecx;
        for(ll i =0;i<n;i++){
            if(arr[i]<=n && brr[arr[i]]==0){
                brr[arr[i]]=1;
            }
            else{
                vecx.pb(arr[i]);
            }
        }
        ll k=0;
        sort(vecx.begin(),vecx.end());
        for(ll i =1;i<=n;i++){
            if(brr[i]==0){
                if(vecx[k]%2==0 && i<=( (vecx[k]/2 )-1 )){
                    count++;
                }
                else if((vecx[k]%2==1 && i<=( (vecx[k]/2 ) ))){
                    count++;
                }
                else{
                    cout<<-1<<"\n";
                    goto c;
                }
                k++;
            }
        }
        cout<<count<<"\n";
        c:;
    }
}
