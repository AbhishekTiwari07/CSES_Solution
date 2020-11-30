#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n,t;
    set<long long >s;
    cin>>n;
    for(long long i=0;i<n;i++){
        cin>>t;
        s.insert(t);
    }
    cout<<s.size();
}