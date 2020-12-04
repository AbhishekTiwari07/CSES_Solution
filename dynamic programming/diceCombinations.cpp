#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define INF (unsigned)!((int)0)
#define m 1000000007
#define fo(i, n) for(ll i=0;i<n;i++)
typedef vector<int> vi;
typedef vector<ll> vl;

int main(){
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());
    ll n,temp=0;
    cin>>n;
    vi v;
    fo(i,n+1){
        temp=0;
        if(i==0)
            v.push_back(1);
        else{
            fo(j,6){
                if(i-(j+1)>=0)
                    temp+=v[i-j-1];
                    temp%=m;
            }
            v.push_back(temp);
        }
    }
    cout<<v[n];
    return 0;
}