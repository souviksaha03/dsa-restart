#include<iostream>
#include<deque>
using namespace std;
int main(){
    deque<int> d;
    d.push_back(3);
    d.push_front(2);
    for(int i:d){
        cout <<i<<endl;
    }
    d.pop_back();
    for(int i:d){
        cout <<i<<endl;
    }
    //d.at(1);
    cout<<d.empty();

}