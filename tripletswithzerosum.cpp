#include<iostream>
using namespace std;
int main(){
	int arr[20];
	int n;
	cin>>n;
	cout<<"enter the values"<<endl;
	for(int i=0;i<n ;i++){
		cin>>arr[i];
	}
	for(int i=0;i<n-2;i++){
		for(int j=i+1;j<n-1;j++){
			for(int k=j+1;k<n;k++){
				int sum = arr[i]+arr[j]+arr[k];
				if(sum==0){
					cout<<arr[i]<<" "<<arr[j]<<" "<<arr[k]<<" "<<endl;
				}
			}
		}
	}
}
