#include<iostream>
using namespace std;
int powe(int n , int p){
	if(p==0){
		return 1;
	}
	int mul = powe(n,p-1);
	return n*mul;
}
int main(){
	int n,p ;
	cin>>n>>p;
	cout<<powe(n,p);
}
