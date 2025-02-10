#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>recieve(n+1);
    for(int i{1};i<=n;i++){
        int temp;
        cin>>temp;
        recieve[temp]=i;
    }
    for(int j{1};j<=n;j++){
    cout<<recieve[j]<<' ';
    }
    return 0;
}