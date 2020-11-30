#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n;
    cin>>n;
    if(n==2||n==3)
        cout<<"NO SOLUTION";
    else{
        for(int i=n;i>n/2;i--){
            cout<<i<<" "<<i-2<<" ";
        }
    }
    return 0;
}