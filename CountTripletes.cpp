//count tripletes with given sum
#include<iostream>
using namespace std;
int FindTripletes(int * arr , int  n){
    int ar[100000]={0};
    int count =0;
    for(int i=0;i<n;i++){
        ar[arr[i]]=1;

    }
    for(int i=0;i<n-1;i++){
        for(int j=i+1 ; j<n;j++){
            if(ar[arr[i]+ arr[j]]==1){
                    count++;
            } 
        }
    }
    return count;

}


int main(){
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<" "<<FindTripletes(arr,n);
}