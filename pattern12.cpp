#include<iostream>
using namespace std;
int main(){
	int i ,j, count =0 ;
	char r = 65;
	for(i=1;i<=4;i++){
			count = i;
		for(j=1;j<=i;j++){
		
			cout<< r<<" ";
		}
		r=r+1;
		cout<<"\n" ;
 }
}
