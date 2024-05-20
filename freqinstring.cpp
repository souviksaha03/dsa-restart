#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
	string s ;
	cin>> s ;
	int freq[26];
	for(int i=0;i<26;i++){
		freq[i]=0 ;
	}
	
	for(int i=0 ; i<s.length();i++){
		freq[s[i]-'a']++;
	}
	char ans='a';
	int max=0;
	for(int i=0;i<26;i++){
		if(freq[i]>max){
			max= freq[i];
			ans= i+ 'a';
		}
	}
	cout<<max<<" "<< ans;
	
	return 0;
} 
