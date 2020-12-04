#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define INF 99999999999999
#define m 1000000007
#define fo(i, n) for(ll i=0;i<n;i++)
typedef vector<int> vi;
typedef vector<ll> vl;

int main(){
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());
    
    ll n,total,temp;
    vl v,c;
    cin>>n>>total;
    fo(i,n){
        cin>>temp;
        c.push_back(temp);
    }
    fo(i,total+1){
        temp=INF;
        if(i==0)
            v.push_back(0);
        else{
            for(auto x:c){
                if(i-x>=0)
                    temp = min(temp,v[i-x]+1);
            }
            v.push_back(temp);
        }
    }
    if(temp!=INF)
        cout<<v[total];
    else
        cout<<"-1";
    
    return 0;
}