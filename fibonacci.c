//fibonacci series
#include<iostream>
using namespace std;
int main(){
	int pre , next;
	cout<< 0 ; 
	cout<< 1;
	pre = 0;
	next = 1;
	int n ;
	cout<< "enter how namy times you want to print fobonacci series"<<endl;
	cin>> n;
	for(i=0;i<n;i++){
		int ne = (pre + next);
		cout<< n;
		pre = next;
		next =ne;
			}
	
}
