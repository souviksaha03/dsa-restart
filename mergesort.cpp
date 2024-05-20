#include<iostream>
using namespace std;
void Merge(int arr[] , int lb ,int mid, int ub, int n){
		int b[100],i , j ,k;
	i=lb;
	j=mid+1;
	k=lb;
	while(i<=mid && j<=ub )
	{
		if(arr[i]<=arr[j])
		{
			b[k]=arr[i];
			i++,k++;
		}
		else{
			b[k]=arr[j];
			j++ ,k++;
		}
	}
		if(i>mid)
		{
			while(j<=ub)
			{
				b[k]=arr[j];
				k++,j++;
			}
		}
		else{
			while(i<=mid)
			{
				b[k]=arr[i];
				i++,k++;
			}
		}
		printf("sorted array is\n");
	for(i=0;i<n;i++)
	{
		printf("%d\n",arr[i]);
	}
	
}
void mergeSort(int arr[] , int l, int r,int n){
	if(l<r){
		int mid = (l+r)/2;
		mergeSort(arr,l,mid,n);
		mergeSort(arr,mid+1,r,n);
		Merge(arr,l,mid,r,n);
	}
}
int main(){
	int n ;
	n=5;
	int arr[] ={9,7,8,0,1};
	mergeSort(arr,0,n-1,n);
	
}
