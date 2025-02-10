#include<iostream>
#include<string>
#include<cmath>
using namespace std;
int main(){
    string s1,s2;
    int num{0};
    cin>>s1>>s2;
    for(int i{0};s1[i]!='\0';i++){
      if((int)(s1[i])>=97){
        s1[i]=s1[i]-32;
      }
      if((int)(s2[i])>=97){
        s2[i]=s2[i]-32;
      }
      if(s1[i]>s2[i]){
       num+=1 ;
       break;
      }
      if(s1[i]<s2[i]){
       num-=1 ;
       break;
      }
    }
    cout<<num;
    return 0;
}