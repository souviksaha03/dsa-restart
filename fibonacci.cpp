//fibonacci series
#include<iostream>
using namespace std;
int main(){
	int pre , next;
	int n ,i;
	cout<< "enter how namy times you want to print fobonacci series"<<endl;
		cin>> n;
	cout<< 0<< " "; 
	cout<< 1 << " ";
	pre = 0;
	next = 1;
	for(i=1;i<n;i++){
		int ne = (pre + next);
		cout<< ne << " ";
		pre = next;
		next =ne;
			}
	
}
