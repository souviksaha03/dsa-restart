//consecutive
#include<iostream>
using namespace std;
int main(){
	
	int arr[20],n; cout<<"enter the value of n"<<endl; cin>>n;
	for(int i =0;i<n;i++){
		cin>>arr[i];
	}
	int sum = 0, c=0;
	int a; cout<<"enter sum"<<endl; cin>>a ;
	for(int j=0;j<n;j++){
		if(j+1 > n ){
			sum=sum+n;
		}
		else{
			sum=arr[j]+arr[j+1];
		}
		if(sum==a){
			cout<<"possible"<<" "<<arr[j]<<"and"<<arr[j+1];
			c=c+1;
			break;
		}
		sum=0;
	}
	if(c==0){
		cout<<"not";
	}
	return 0;
}


