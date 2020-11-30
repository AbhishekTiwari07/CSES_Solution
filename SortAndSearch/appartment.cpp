#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fo(i, n) for(ll i=0;i<n;i++)
typedef vector<int> vi;
typedef vector<ll> vl;

int main(){
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());

    ll n,m,k,temp,papp=0,pren=0,result=0;
    vl app,ren;
    cin>>n>>m>>k;
    fo(i,n){
        cin>>temp;
        ren.push_back(temp);
    }
    fo(i,m){
        cin>>temp;
        app.push_back(temp);
    }
    sort(app.begin(),app.end());
    sort(ren.begin(),ren.end());
    while(pren<n&&papp<m){
        if(app[papp]<ren[pren]-k)
            papp++;
        else if(ren[pren]-k<=app[papp]&& app[papp]<=ren[pren]+k){
            papp++;
            pren++;
            result++;
        }
        else if(ren[pren]+k<app[papp])
            pren++;
    }
    cout<<result;
    return 0;
}