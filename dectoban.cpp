//decimal to binary bitwise approach
#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int n, ans=0,i=0 ;
	cout<< "enter the value of n"<< endl;
	cin>>n ;
	while(n!=0){
		int dig = n&1;
		ans  = (dig * pow(10,i)) + ans;
		n= n>>1;
		i=i+1;
	}
	cout<<ans;
}

