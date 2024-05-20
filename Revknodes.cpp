#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;

    node(int val){
        data=val;
        next=NULL;
    }
};
void insertAtTail(node* &head , int val){
    node* n = new node(val);
    if(head==NULL){
        head=n;
        return;
    }

    node* temp = head;
    while(temp->next !=NULL){
        temp=temp->next;
    }
    temp->next=n;
}
void display(node* head){
 node* temp;
 temp=head;
while(temp != NULL){
    cout<<temp->data<< "->" ;
    temp=temp->next;
}
}
node* reversek(node* &head, int k){
    node* prev = NULL;
    node* cur = head;
    node* ne ;
    int count =0;
    while(cur!=NULL && count<k){
        ne=cur->next;
    cur->next=prev;
    prev=cur;
    cur=ne;
    count++;
    }
    if(ne!=NULL){
        head->next= reversek(ne,k);
    }
    return prev;

}
int main(){
    node* head=NULL;
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    insertAtTail(head,4);
    display(head);
cout<<endl;
int k;
cout<<"enter the value of k"<<endl;
cin>>k;
node* nh =reversek(head,k);
display(nh);


}