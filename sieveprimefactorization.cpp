#include<iostream>
using namespace std;
int primesteve(int n){
	int prime[100]={0};
	for(int i=2;i<=n;i++){
		if(prime[i]==0){
			for(int j=i*i ;j<=n;j+=i){
				prime[j]=1;
			}
		}
	}
	
for(int i=2;i<n;i++){
if(n==1){
break;
}
while(prime[i]==0&&n%i==0){
cout<<i<<endl;
n=n/i;
}}
}

int main(){
	primesteve(50);
}
