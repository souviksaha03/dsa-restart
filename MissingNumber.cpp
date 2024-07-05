//missing number
#include<iostream>
using namespace std;





int main(){
    int arr[]  = {1, 2, 4, 6, 3, 7, 8};
    int size = sizeof(arr)/sizeof(arr[0]);
    int sum=0;
    int su = (8*9)/2;
    for(int i=0 ;i<size ;i++){
        sum+=arr[i];
    }
    cout<<"missing element is "<< (su-sum);
}