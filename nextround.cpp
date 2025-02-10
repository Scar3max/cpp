#include<iostream>
using namespace std;
int main(){
    int n{},k{},a[101],count{0};
    cin>>n>> k;
    for(int b{0};b<n;b++){
        cin>>a[b] ;
    }
    // for(int i{0};i<n;i++){
    //     for(int j{0};j<n-1;j++){
    //         if(a[j]<a[j+1]){
    //             int x;
    //             x=a[j];
    //             a[j]=a[j+1];
    //             a[j+1]=x;
    //         }
    //     }
    // }
    // for(int p{0};p<n;p++){
    //     cout<<a[p];
    //     }
    for(int l{0};l<n;l++){
        if(a[l]>=a[k-1]&&a[l]>0){
            count++;
        }
    }
    cout<<count;
    return 0;
}