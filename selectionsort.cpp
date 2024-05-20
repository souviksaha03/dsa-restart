//selecton sort 
#include<iostream>
using namespace std;
int main(){
	int arr[]= {33,23,1,2,4};
	int n=5;
	int i,j;
	for(i=0;i<n-1;i++){
		int min = i;
		for(j=i+1;j<n;j++){
			if(arr[j]<arr[min]){
				min=j;
			}
		}
		if(min!=i){
			int temp = arr[i];
			arr[i]=arr[min];
			arr[min]=temp;
		}
		
	}
	
	cout<<"after sorting"<<endl;
	for(i=0;i<n;i++){
		cout<<arr[i]<<"\t";
	}
}
