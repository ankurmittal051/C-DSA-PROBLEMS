#include <iostream>
#include"takeInput.h"
using namespace std;


void print(NODE *head){
    NODE *temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}


NODE *takeInput(){
    int data;
    cin>>data;
    NODE *head=NULL;
    NODE *tail=NULL;
    while(data!=-1){
        NODE *newNode=new NODE(data);
        if(head==NULL){
            head=newNode;
            tail=newNode;
        }else{
            tail->next=newNode;
            tail=tail->next;
        }
        cin>>data;
    }
    return head;
}
NODE *appendLastNtoFirst(NODE *head,int n){
    if(head==NULL || n==0){
        return head;
    }
    NODE *fast=head;
    NODE *slow=head;
    NODE *initial=head;
    for(int i=0;i<n;i++){
        fast=fast->next;
    }
    while(fast->next!=NULL){
        slow=slow->next;
        fast=fast->next;
    }
    NODE *temp=slow->next;
    slow->next=NULL;
    fast->next=initial;
    head=temp;
    return head;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        NODE *head=takeInput();
        int n;
        cin>>n;
    head=appendLastNtoFirst(head,n);
        print(head);
    }
}
