#include<iostream>
using namespace std;
int main(){
	
	int arr[100] ,n,i,j,k,sum=0,msum=0;
	cout<<"enter the value of n"<<endl ;
	cin>>n;
	cout<<"enter elements"<<endl;
	for(i=0;i<n;i++){
		cin>>arr[i];
	}
	for(i=0; i<n ;i++){
		for(j=i;j<n;j++){
			sum=0;
			for(k=i;k<=j;k++){
				cout<<arr[k]<<" ";
				sum=sum+arr[k];
				
			}cout<<endl;
			if(sum>msum){
				msum=sum;
			}
		}
	}
	cout<<"max sum is "<<msum;
	
	
	
	
	return 0;
	
}
