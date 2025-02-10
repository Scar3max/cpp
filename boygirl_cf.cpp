#include<iostream>
using namespace std;
int main(){
  string s;
  cin>>s;
  int st[100]={0},num{0};
  for(int i{0};s[i]!='\0';i++){
    for(int j{i+1};s[j]!='\0';j++){
      if(s[i]==s[j]){
        st[j]=1;
      }
    }
    if(st[i]==0){
      num++;
    }
  }
  if(num%2!=0){
    cout<<"IGNORE HIM!";
  }
  else{
    cout<<"CHAT WITH HER!";
  }
  return 0;
}