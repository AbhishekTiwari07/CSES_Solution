#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n,prev,temp,sum=0;;
    cin>>n;
    cin>>prev;
    for(int i=0;i<n-1;i++){
        cin>>temp;
        if(prev-temp>0){
            sum+=(prev-temp);
        }
        else
            prev=temp;
    }
    cout<<sum;
    return 0;
}