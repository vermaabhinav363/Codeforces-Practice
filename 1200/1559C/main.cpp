#include <bits/stdc++.h>
#define Mod(a,b) ((((a)%(b))+(b))%(b))
#define ll long long
#define vec vector<ll>
#define pb push_back
#define itrs set<ll>::iterator
#define itrv vector<ll>::iterator
#define mk make_pair
#define MAX2 9223372036854775806;
const int MOD = 1000000007;
const int MAX = 10000005;
//fill(arr, arr + size, value);
#define ff first
#define ss second
//printf("%.15f\n", float(x)/y);
//atoll( str.c_str() )
using namespace std;
using namespace std::chrono;
high_resolution_clock::time_point curTime() { return high_resolution_clock::now(); }

template<class T> T max(T a, T b, T c)
    {
        return max(a, max(b, c));
    }
bool prime[1000001];
void SieveOfEratosthenes(int n)
{
    memset(prime, true, sizeof(prime));

    for (int p = 2; p * p <= n; p++)
    {

        if (prime[p] == true)
        {

            for (int i = p * p; i <= n; i += p)
                prime[i] = false;
        }
    }
}
ll fact(ll n) {
   if (n == 0 || n == 1)
   return 1;
   else
   return n * fact(n - 1);
}
//comb = fact(n) / (fact(r) * fact(n-r));
//per = fact(n) / fact(n-r);



/*
//---------sorting vector first in descending and second in ascending---------//
std::sort(vecx.begin(), vecx.end(),
  [](auto&& lhs, auto&& rhs){
    return lhs.first > rhs.first ||
      (lhs.first == rhs.first && lhs.second < rhs.second);
  });

*/
//<<setprecision(60)<<
#define sa(v) sort(v.begin(), v.end())
#define sd(v) sort(v.begin(),v.end(), greater<int>())
/*
    vector<int> a(n);
    for (int &x : a) cin >> x;
    int mx = *max_element(a.begin(), a.end());
    int cmx = count(a.begin(), a.end(), mx);
    int k = count(a.begin(), a.end(), mx - 1);
*/
//count(s.begin(), s.end(), 'N') == 1 ? "NO\n" : "YES\n"
bool cfn(double a, double b)
{

    // Correct method to compare
    // floating-point numbers
    if (abs(a - b) < 1e-9) {
        return true;
    }
    else {
        return false;
    }
}
//Stay Calm
//Read Quest properly
//Check Corner Cases
int main()


{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    ll t;
    cin>>t;
    while(t--){
     ll n;
     cin>>n;
     ll arr[n];
     for(ll i=0 ;i<n;i++){
            cin>>arr[i];
     }
  
     if(arr[n-1]==0){
        for(ll i =0;i<n+1;i++){
            cout<<i+1<<" ";
        }
     }
     else if(arr[0]==1){
        cout<<n+1<<" ";
        for(ll i =0;i<n;i++){
            cout<<i+1<<" ";
        }
     }
     else{
        vec vecx;
        bool flag  = true;
        for(ll i =0;i<n;i++){
            if(flag && (i+1<n) && (arr[i]==0) && (arr[i+1]==1)){
                vecx.pb(i+1);
                vecx.pb(n+1);
                flag = false;
            }
            else{
                vecx.pb(i+1);
            }
        }
        if(vecx.size()==n+1){
            for(ll i =0;i<n+1;i++){
                cout<<vecx[i]<<" ";
            }
        }
        else{
            cout<<-1<<" ";
        }

     }


    }
 }

