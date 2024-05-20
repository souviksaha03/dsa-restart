#include<iostream>
using namespace std;
int foccur(int arr[] , int n, int i ,int key ){
	
	
	
	if(i==n){
		return -1;
	}
	if(arr[i]== key){
		return i;
	}
	return foccur(arr,n,i+1,key);
}

int loccur(int arr[] , int n, int i ,int key ){
	
		if(i==n){
		return -1;
	}
 int restArray=loccur(arr,n,i+1,key);
	if(restArray!=-1){
		return restArray;
	}
	if(arr[i]== key){
		return i;
	}
	
}
int main(){
	int arr[]={4,2,1,2,5,2,7};
	cout<<foccur(arr,7,0,1)<<endl;
	return  0;
}
