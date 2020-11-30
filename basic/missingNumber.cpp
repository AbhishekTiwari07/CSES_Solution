#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n,temp;
    cin>>n;
    long long int a[n]={0};
    for(long long i=0;i<n-1;i++){
        cin>>temp;
        a[temp-1]++;
    }
    for(long long i=0;i<n;i++)
        if(a[i]==0)
            cout<<i+1;
    return 0;
}