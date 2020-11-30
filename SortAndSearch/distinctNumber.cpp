#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n,temp,count=0;
    unordered_set<int> s;
    cin>>n;
    for(long long i=0;i<n;i++){
        cin>>temp;
        if(s.find(temp)==s.end()){
            count++;
            s.insert(temp);
        }
    }
    cout<<count;
    return 0;
}