#include<iostream>
using namespace std;
int main(){
    int n{0};
    cin>>n;
    int a{65};
    for(int i{0};i<n;i++){
        printf("\n");
        for(int j{0};j<i;j++){
            if((i+j)%2==0){
                printf("%c",(char)(a+32));
            }
            else{
                printf("%c",(char)a);
            }
            // if(a=90){
            //     a=a+32;
            // }
            a++;
        }
    }
    return 0;
}