#include<iostream>
using namespace std;
int main(){
	int i ,j, count =0;
	for(i=1;i<=4;i++){
			count = i;
		for(j=1;j<=i;j++){
		
			cout<< count << " ";
			count = count+1;
		}
		cout<<"\n" ;
 }
}
