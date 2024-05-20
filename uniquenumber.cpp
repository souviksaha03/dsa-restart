#include<iostream>
using namespace std;
int main(){
	int sum=0;
	int arr[7]={2,4,6,3,4,6,2};
	for(int i =0; i<7;i++){
		sum= sum ^arr[i];
	}
	cout<<sum;
}
