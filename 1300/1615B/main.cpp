#include <bits/stdc++.h>
#define ll long long

using namespace std;
 
int main()
 
{
 
#ifndef ONLINE_JUDGE
 
    freopen("input.txt", "r", stdin);
 
    freopen("output.txt", "w", stdout);
   
#endif
 
 	ll t;
    cin>>t;
    ll arr[200005][25];
    for(ll i= 0;i<200005;i++){
        for(ll j= 0;j<25;j++){
            arr[i][j]=1;
        }
    }
    for(ll i= 0;i<200005;i++){
        ll k =i;
        ll count =0;
        while(k>0){
            if(k%2==0){
                arr[i][count]=1;
            }
            else{
               arr[i][count]=0; 
            }
            count++;
            k = k/2;
        }
    }
    for(ll i= 0;i<25;i++){
        for(ll j =1;j<200005;j++){
            arr[j][i] += arr[j-1][i];
        }
    }
    while(t--){
        ll l,r;
        cin>>l>>r;
        ll ans = INT_MAX;
        for(ll i=0;i<25;i++){
            ans = min(ans,(arr[r][i]-arr[l-1][i]));
        }
        cout<<ans<<"\n";
    }
}
