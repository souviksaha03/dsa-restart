#include<iostream>
using namespace std;
int pow(int n){
    if(n==0){
        return 1;
    }
    int k=pow(n-1)*2;

    return k;
}
int main(){
    int N;
    cin>>N;
    cout<<pow(N);
}