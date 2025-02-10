#include<iostream>
using namespace std;
int main(){
  string s;
  cin>>s;
  for(int i{0};s[i]!='\0';i++){
    for(int j{0};s[j+1]!='\0';j++){
      if(s[j]=='+'){
        continue;
      }
      if(s[j]>s[j+2]){
        int temp=s[j];
        s[j]=s[j+2];
        s[j+2]=temp;
      }
    }
  }
  cout<<s;
  return 0;
}