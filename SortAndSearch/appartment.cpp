#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fo(i, n) for(ll i=0;i<n;i++)
typedef vector<int> vi;
typedef vector<ll> vl;

int main(){
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());

    ll n,m,k,temp,papp=0,pren=0;
    vl app,ren;
    cin>>n>>m>>k;
    fo(i,n){
        cin>>temp;
        app.push_back(temp);
    }
    fo(i,m){
        cin>>temp;
        ren.push_back(temp);
    }
    while(papp<n&&pren<m){
        if()
    }
    return 0;
}