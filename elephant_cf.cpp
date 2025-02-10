#include<iostream>
using namespace std;
int main(){
  int x,n=0;
  cin>>x;
  for(int i{5};i>0;i--){
    for(int j{1};x>=i;j++){
      x-=i;
      n++;
    }
  }
  cout<<n;
  return 0;
}