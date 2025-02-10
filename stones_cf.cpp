#include<iostream>
#include<string>
using namespace std;
int main(){
  int n,num{0};string s;
  cin>>n>>s;
  for(int i{0};i<n;i++){
    if(s[i]=='X'){
      continue;
    }
      if(s[i]==s[i+1]){
        num++;
        s[i]='X';
      }
  }
  cout<<num;
  return 0;
}