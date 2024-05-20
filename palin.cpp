#include<iostream>
using namespace std;
int main()
{
	char arr[] = "121";
	//cin>>arr;
	int s = sizeof(arr)-2;
	int i=0, j=s,c=0;
	while(i<j){
		if(arr[i]!=arr[j]){
			cout<<"not a palindrome"<<endl;
			break;
		}
		else{
			i=i+1;
			j=j-1;
			c= c+1;
		}
	}
	if(c>0){
		cout<<"yes";
	}
}
