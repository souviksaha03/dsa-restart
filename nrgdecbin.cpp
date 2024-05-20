#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int n = -6;
	int a = n + n*(-2);

	int newn=0 ;
	int i=0;
	while(a!=0){
		int d = (a^1);
		newn = (d * pow(10,i)) + newn;
		a = a>>1;
		i++;
	}
	cout<< newn;
}
