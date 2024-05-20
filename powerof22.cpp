//recursive function for power of 2
#include<iostream>
using namespace std;
int poweroftwo(int n){
	if(n==1){
	return 2;	
	}
	else{
		return(poweroftwo(n-1)*2);
	}
}
int main(){
	int n=3;
	cout<<poweroftwo(3);
}
