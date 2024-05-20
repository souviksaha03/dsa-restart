#include<iostream>
using namespace std;
class A{
	public:
		string name;
		int roll; 
		int age;
		void print(string name, int roll ,int age){
			name=name;
			roll=roll;
			age=age;
			cout<<"name is  "<<name<<"roll is  "<<roll<<"age is"<<age;
		}
};
class B: public A{
	public:
		
	void roll(int a ){
		cout<<"roll 2 is" << a<<name;
	}
};
int main(){
	A souvik;
	souvik.print("SOUVIK", 45,889);
	B sayak;
	sayak.name= "SAYAK";
	sayak.roll(90);
}
