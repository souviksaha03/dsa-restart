#include<iostream>
using namespace std;
int main(){
	int i ,j, count =0 ;
	for(i=1;i<=4;i++){
			
		for(j=1;j<=i;j++){
			char ch = ('A' + i + j -2);
			cout<< ch<<" ";
			j=j+1;
		
			
		}
			
		cout<<"\n" ;
 }
}
