#include<iostream>
using namespace std;
//int updateBit(int n , int pos , int bit){
//	if(bit==1){
//	
//		return(n | (1<<pos));
//	}
//	else{
//		return(n ^ (1<<pos));
//	}
//}
int updateBit(int n , int pos , int bit){
	int mask= ~(1<<pos);
	n = n & mask;
	return( n | (bit<<pos));
}
int main(){
	
	cout<<updateBit(5,1,1);
	
	
	return 0;
}
