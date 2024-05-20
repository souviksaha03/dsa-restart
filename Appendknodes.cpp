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
    cout<<temp->data<< " " ;
    temp=temp->next;
}
}
void insert_head(node* &head , int val  ){
 node* n = new node(val);
 n->next =head;
head=n;
}
void Appendk(node* &head , int pos){
    node* temp=head;
    node* temp2=head;
    int count=1;
    while(count<pos &&temp!=NULL){
        temp=temp->next;
        count+=1;
    }
    while(temp2->next!=NULL){
        temp2=temp2->next;
    }
    node* temp3 = temp->next;
    temp->next==NULL;
    node* i =head;
    temp2->next==i;
    head=temp3;
    display(head);
}

int main(){
 node* head=NULL;
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    insertAtTail(head,15);
    insertAtTail(head,25);
    insertAtTail(head,35);
    insertAtTail(head,90);
    insertAtTail(head,9);
    display(head);
    cout<<endl;
    Appendk(head,3);
    display(head);
}