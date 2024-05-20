#include <bits/stdc++.h>
using namespace std;
void findPermu(int arr[], int n){
    sort(arr, arr+n);
   
    int maxsum=0;
    do{
         int sum=0;
       for(int i=0;i<n-1;i++){
           sum+=(arr[i]+arr[i+1]);
       } 
       if(maxsum<sum)
           maxsum=sum;
       
    }while(next_permutation(arr, arr+n));
    cout<<maxsum<<endl;
}
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	        cin>>arr[i];
	    findPermu(arr,n);
	}

}
