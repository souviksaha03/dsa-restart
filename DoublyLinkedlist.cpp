#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* prev;
    node* next;

    node(int val){
        data=val;
        next=NULL;
        prev=NULL;

    }

};
void insertHead(node* &head,  int val){
    node* n = new node(val);
    n->next=head;
    if(head!=NULL){
        head->prev=n;
    }
    head=n;
}
void insertAtTail(node* & head , int val){
    if(head==NULL){
        insertHead(head,val);
    }
    node* nnode = new node(val);
    node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=nnode;
    nnode->prev=temp;

}
void deleteHead(node* &head){
    node* todelete = head;
    head= head->next;
    head->prev=NULL;
    delete todelete;
}
void deletion(node* &head , int val){
    node* temp;
    temp=head;
    while(temp!=NULL && temp->next->data!=val){
        temp=temp->next;
    }
    node* todel=temp->next;
    temp->next->next->prev=temp;
    temp->next=temp->next->next;
    delete(todel);
    
}
void display(node* head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
int main(){
    node*  head= NULL;
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    insertAtTail(head,4);
    insertAtTail(head,5);
    display(head);
    insertHead(head,10);
    cout<<endl;
    display(head);
    deleteHead(head);
    cout<<endl;
    display(head);
 return 0;
}