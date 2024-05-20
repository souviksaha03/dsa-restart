#include<iostream>5033

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
void insert_head(node* &head , int val  ){
 node* n = new node(val);
 n->next =head;
head=n;
}
bool search(node* head , int key){
    node* temp= head;
    while(temp!=NULL){
    if(temp->data==key){
        return true;
    }
    temp=temp->next;
    }
    return false;
}
void deleteHead(node* &head){
    node* todelete = head;
    head= head->next;
    delete todelete;
}
void deletion(node* &head ,int val){
    node* temp = head;
    while(temp->next->data != val){
        temp=temp->next;
    }
    node* todel =temp->next;
    temp->next= temp->next->next;
    delete todel;
}
node* reverse(node* &head){
    node* prev = NULL;
    node* cur = head;
    node* ne ;
    while(cur!=NULL){
        ne=cur->next;
    cur->next=prev;
    prev=cur;
    cur=ne;
    }
    return prev ;

}
int main(){
    node* head=NULL;
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    
    insert_head(head,90);
display(head);
deletion(head,2);
deleteHead(head);
display(head);
cout<<endl;
node* newhead = reverse(head);
display(newhead);
//cout<<search(head,93);
}
