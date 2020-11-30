#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fo(i, n) for(ll i=0;i<n;i++)
typedef vector<int> vi;
typedef vector<ll> vl;

int main(){
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());
    ll n,m,temp;
    multiset<ll,greater<int>>h;
    cin>>n>>m;
    fo(i,n){
        cin>>temp;
        h.insert(temp);
    }
    fo(i,m){
        cin>>temp;
        auto iter = h.lower_bound(temp);
        if(iter == h.end())
            cout<<"-1"<<endl;
        else{
            cout<<*iter<<endl;
            h.erase(iter);
        }
    }
    return 0;
}