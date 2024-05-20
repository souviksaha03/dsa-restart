#include<iostream>
using namespace std;
int main(){
	int arr[50];
	int n , i ;
	cout<<"enter how many values you want to take"<<endl;
	cin>>n;
	cout<<"enter the values"<<endl;
	for(i=0;i<n;i++){
		cin>>arr[i];
	}
	int start =0 , end = n-1;
		cout<<"array before reverse"<<endl;
		for(i=0;i<n;i++){
		cout<<arr[i]<< "\t";
	}
	cout<<endl;
	while(start<=end){
		int temp;
		temp= arr[start];
		arr[start]=arr[end];
		arr[end]= temp;
		start++;
		end--;
	}
	cout<<"array after reverse"<<endl;
		for(i=0;i<n;i++){
		cout<<arr[i]<< "\t";
	}
	
}
