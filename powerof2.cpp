//check if a given number is power of 2
#include<iostream>
using namespace std;
int pow2(int n){
	if((n & (n-1))== 0){
		cout<<"YES";
	}
	else{
		cout<<"NO";
	}
}
int main(){
	pow2(16);
}
