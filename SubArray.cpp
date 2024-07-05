//subarray with given sum
#include<iostream>
using namespace std;
int subArraySum(int * arr, int n , int sum){
    int addsum =0, start=0,end=0;
    while (end<n)
    {
        addsum+=arr[end];
        while(addsum>sum && start<end){
            addsum-=arr[start++];
        }
        if(addsum == sum){
            cout<<"subarray found"<<start<<" "<<"to"<<" "<<end;
            return 1;
        }
        end++;
    }
    cout<<"No sumarray found";
    return 0;
    
}




int main(){
    int arr[]={ 15, 2, 4, 8, 9, 5, 10, 23 };
    int n = sizeof(arr)/sizeof(arr[0]);
    int sum= 23;
    subArraySum(arr, n ,sum);
}