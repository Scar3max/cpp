#include<iostream>
using namespace std;
int main(){
    int n{},x{0};
    string c{};
    cin>>n;
    for(int i{0};i<n;i++){
        cin>>c;
        if(c[0]=='+'||c[c.length()-1]=='+'){
            x++;
        }
        else if(c[0]=='-'||c[c.length()-1]=='-'){
            x--;
        }
    }
    cout<<x;
}