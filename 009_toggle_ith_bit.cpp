#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    int temp=(1<<k);
    int x=n^temp;
    cout<<(x)<<endl;
    return 0;   
}