#include<iostream>
using namespace std;
int main(){
  int n,num[4];
  cin>>n;
  n++;
  for(int a{0};;a++){
    int flag{0};
    int m=n;
  for(int i{0};i<4;i++){
    if(flag){
        break;
    }
    num[i]=m%10;
    m=m/10;
    for(int j=0;j<i;j++){
      if(num[i]==num[j]){
        flag++;
        break;
      }
      }
    }
    if(flag){
      n++;
    }
    else{
      break;
    }
  }
  cout<<n;
}