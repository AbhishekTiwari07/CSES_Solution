#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fo(i, n) for(ll i=0;i<n;i++)
typedef vector<int> vi;
typedef vector<ll> vl;

int main(){
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());
    ll n,temp1,temp2;
    cin>>n;
    vector<pair<ll,ll>>t;
    fo(i,n){
        cin>>temp1>>temp2;
        t.push_back(make_pair(temp1,temp2));
    }
    sort(t.begin(),t.end());
    for(auto i:t){
        cout<<i.first;
    }
    return 0;
}