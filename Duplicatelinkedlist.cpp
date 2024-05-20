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
void insert(node* &head , int data){
    node* n= new node(data);
 if(head==NULL){
    head=n;
    return;
 }
 node* temp= head;
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
void remove_duplicate(node* head){
        node* temp1= head;
        node* temp2;
        //=head->next;

        while(temp1!=NULL && temp1->next!=NULL){
            temp2=temp1;
            while (temp2->next !=NULL)
            {
                if(temp1->data!=temp2->next->data){
                    temp2=temp2->next;
                }
                else{
                    node* n= temp2->next;
                    temp2->next= temp2->next->next;
                    delete n;
                }
            }
            temp1=temp1->next;
            
        }
        display(head);
}
int main(){
    node* head= NULL;
        int n;
        cout<<"enter how many value you want to put"<<endl;
        cin>>n;
        int arr[50];
        cout<<"enter the values"<<endl;
        for(int i=0 ;i<n ;i++){
            cin>>arr[i];
        }
        for(int i=0 ;i<n;i++){
            insert(head,arr[i]);
        }
        display(head);
        cout<<endl;
        remove_duplicate(head);
        
}