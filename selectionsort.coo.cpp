//selecton sort 
#include<iostream>
using namespace std;
int main(){
	int arr[]= {33,23,1,2,4};
	int i,j;
	for(i=0;i<n-1;i++){
		for(j=0;j<n;j++){
			if(arr[j]>arr[j+1]){
				int temp = arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	
	cout<<"after sorting"<<endl;
	for(i=0;i<n;i++){
		cout<<arr[i]<<"\t";
	}
}
