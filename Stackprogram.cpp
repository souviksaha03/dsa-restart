#include<iostream>
using namespace std;
#define n 100
class stack{
    int* arr;
    int top;
    
    public:
    stack(){
        arr= new int[n];
    top=-1;
    }
    void push(int x){
        if(top==n-1){
            cout<<"stack is full"<<endl;
            return;
        }
        else{
            top=top+1;
            arr[top]=x;
        }
    }
    void pop(){
        if(top==-1){
            cout<<"no element present in stack"<<endl;
            return;
        }
        else{
            top=top-1;

        }
    }
    int Top(){
        if(top==-1){
            cout<<"no element in the stack"<<endl;
            return -1;

        }
        else{
            return arr[top];
        }
    }
    bool empty(){
        return top==-1;
    }
    void display(){
        for(int i=0; i<=top;i++){
            cout<<"remaining element"<<arr[i]<<endl;
        }
    }
};
int main(){
    stack st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    cout<<st.Top();
    cout<<endl;
    st.pop();
    cout<<st.Top()<<endl;
    st.push(89);
    cout<<st.Top()<<endl;
    st.display();
    cout<<endl<<st.empty();

}