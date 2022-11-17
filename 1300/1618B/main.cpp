#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll t;
    cin>>t;
    while(t--){
    ll n;
    cin>>n;
    ll k;
    cin>>k;
    ll arr[n];
    for(ll i=0 ;i<n;i++){
    cin>>arr[i];}

    ll sum =0;
    sort(arr,arr+n);
    for(ll i= 0;i<n-2*k;i++){
    sum+= arr[i];}
    for(ll i = n-2*k;i<n;i++){
        if(i+k<n)
        sum+= (arr[i]/arr[i+k]);
    }
    cout<<sum<<"\n";

    }
}
