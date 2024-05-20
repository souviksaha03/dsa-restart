#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
	string s ;
	cin>> s ;
	int i =0;
	while(i<s.length()){
		if(s[i]>='a' && s[i]<= 'z'){
			s[i]-=32;
		}
		else{
			s[i]+=32;
		}
		i++;
	}
	cout<<s;
	
	
	return 0;
} 
