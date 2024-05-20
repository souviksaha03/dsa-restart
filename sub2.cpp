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
int currsum[n+1];
currsum[0]=0;
for(i=1;i<=n;i++){
	currsum[i]= currsum[i-1]+arr[i-1];
}
int maxSum = INT_MIN;
for(int i=1; i<=n;i++){
	int sum=0;
	for(j=0; j<i;j++){
		sum = currsum[i] - currsum[j];
		maxSum= max(sum , maxSum);
	}
}
cout<<maxSum;
	
	
	
	
	return 0;
	
}
