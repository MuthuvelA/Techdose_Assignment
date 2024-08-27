#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    n=(n|(k<<1));
    cout<<k<<"th bit is set "<<n;


    return 0;   
}