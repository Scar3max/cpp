#include<iostream>
using namespace std;
int add(int a,int b){
    return a+b;
}
float add(float a,float b){
    return a+b;
}
int add(int a,int b,int c){
    return a+b+c;
}
int main(){
    int a=1,b=2;
    float c=2.1,d=4.5;
    cout<<add(a,b)<<'\t';
    cout<<add(c,d)<<'\t';
    cout<<add(a,b,a);
   
    return 0;
}