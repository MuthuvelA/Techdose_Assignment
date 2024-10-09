#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int c=0;
    while(n){
        c+=(n&1);
        n=n>>1;
    }
    cout<<c<<endl;

    return 0;   
}