/*#include<iostream>
using namespace std;
int clearBit(int n , int pos){
	return(n^(1<<pos));
}
int main(){
	
	cout<<clearBit(14,1);
	
	
	return 0;
}*/
#include<iostream>
using namespace std;
int clearBit(int n , int pos){
	int mask = ~(1<<pos);
	return (n & mask);
}
int main(){
	
	cout<<clearBit(14,1);
	
	
	return 0;
}
