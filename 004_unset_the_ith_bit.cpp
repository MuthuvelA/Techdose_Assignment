#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    n=n&(~(1<<k));
    cout<<"bit is unset: "<<n;

    return 0;   
}