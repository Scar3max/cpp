#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int a[5][5],count;
    for(int i{0};i<5;i++){
        for(int j{0};j<5;j++){
            cin>>a[i][j];
        }
    }
    for(int k{0};k<5;k++){
        for(int l{0};l<5;l++){
            if(a[k][l]==1){
                count=abs(k-2)+abs(l-2);
                break;
            }
        }
    }
    
    cout<<count;
    return 0;
}