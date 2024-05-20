//no of 1 bit
#include<iostream>
using namespace std;
int main(){
	int n,count=0;
	cin>>n;
	while(n!=0){
		if(n & 1){
			count=count+1;
		}
		n=n>>1;
	}
	cout<<count;
}
