#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    vector<int>a(t),b(t);
    for(int i{0};i<t;i++){
        cin>>a[i]>>b[i];
    }
    for(int j=0;j<t;j++){
        long long remainder = a[j] % b[j];
        long long moves=(remainder == 0) ? 0 : b[j] - remainder;
        cout<<moves<<'\n';
        }
    
    return 0;
}