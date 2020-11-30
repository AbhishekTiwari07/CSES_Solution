#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fo(i, n) for(ll i=0;i<n;i++)
typedef vector<int> vi;
typedef vector<ll> vl;

int main(){
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());
    vi a;
    ll n,x,temp,seat=0;
    cin>>n>>x;
    fo(i,n){
        cin>>temp;
        a.push_back(temp);
    }
    sort(a.begin(),a.end());
    ll i=0,j=n-1;
    while(i<=j){
        if(a[i]+a[j]<=x){
            i++;
            j--;
            seat++;
        }
        else{
            seat++;
            j--;
        }
    }
    cout<<seat;
    return 0;
}