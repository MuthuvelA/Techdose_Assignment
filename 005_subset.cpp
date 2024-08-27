#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<char>a={'a','b','c'};
    int n=3;
    vector<vector<char>>ans;
    for(int i=0;i<(1<<n);i++){
        vector<char>temp;
        for(int j=0;j<n;j++){
            if(i&(1<<j)){
                temp.push_back(a[j]);
            }
        }
        ans.push_back(temp);
    }
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;   
}