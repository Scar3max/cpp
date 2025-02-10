#include<iostream>
#include<random>
using namespace std;
int main(){
    mt19937 mt{};
    for(int i{1};i<=5;++i){
        cout<<mt()<<'\t';
    }
     return 0;
}