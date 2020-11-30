#include<bits/stdc++.h>
using namespace std;

int main(){
    long long max=1,count=1;
    string str;
    cin>>str;
    for(long long i=0;i<str.length()-1;i++){
        if(str[i]==str[i+1]){
            count++;
            if(max<count)  
                max=count;
        }
        else
            count=1;
    }
    cout<<max;
    return 0;
}