#include<iostream>
using namespace std;
int dec(int n){
	if(n==0){
		return 1;
		
	}
	cout<<n;
	dec(n-1);
}
int inc(int n){
	if(n==1){
		cout<<"1";
		return 1;
	}
	
	inc(n-1);
	cout<<n;
}
int main(){
	int n;
	cin>>n;
	dec(n);
	cout<<endl;
	inc(n);
}
