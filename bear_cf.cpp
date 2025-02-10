#include<iostream>
using namespace std;
int main(){
  int a,b,i;
  cin>>a>>b;
  for(i=1;;i++){
    if(a>b){
      break;
    }
    a*=3;
    b*=2;
  }
  cout<<i-1;
}