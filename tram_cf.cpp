#include<iostream>
#include<string>
using namespace std;
int main(){
  int n,a[1000],b[1000],total[1000],max;
  cin>>n;
  for(int i{0};i<n;i++){
    cin>>a[i]>>b[i];
  }
  total[0]=b[0];
  max=total[0];
  for(int j{1};j<n;j++){
    total[j]=total[j-1]+(b[j]-a[j]);
    if(total[j]>max){
      max=total[j];
    }
  }
  cout<<max;
  return 0;
  }