#include<iostream>
using namespace std;
int main(){
	int a , count =0 , i;
	cout<<"enter the value of a"<<endl;
	cin>>a;
	for(i=1;i<=a;i++){
		if(a%i==0){
			count = count+1;
		}
		
	}
	if(count==2){
		cout<< "yes";
	}	
	else{
		cout<< "no";
	}
}
