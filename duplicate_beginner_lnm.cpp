#include<iostream>
#include<string.h>
using namespace std;
int main(){
    int n{},num[100]={0};
    string word[100];
    cin>>n;
   
    for(int i{0};i<n;i++){
        cin>>word[i];
        for(int j{0};j<i;j++){
            if(i==j){
                continue;
            }
            if(word[j]==word[i]){
                num[i]=1;
            }
        } 
    }
    for(int j{0};j<n;j++){
                if(num[j]){
                    cout<<"YES \n";
                }
                else{
                    cout<<"NO \n";
                }
            }
    return 0;
}