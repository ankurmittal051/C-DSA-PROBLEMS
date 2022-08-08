#include<iostream>
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
NODE *bubbleSortLL(NODE *head){
    int count=0;
    NODE *temp=head;
    while(temp!=NULL){
        count++;
        temp=temp->next;
    }
    for(int i=0;i<count;i++){
        NODE *current=head;
        NODE *prev=NULL;
        while(current->next!=NULL){
            if(current->data>current->next->data){
                if(prev!=NULL){
                    NODE *a=current->next->next;
                    current->next->next=current;
                    prev->next=current->next;
                    current->next=a;
                    prev=prev->next;
                }else{
                    head=current->next;
                    current->next=head->next;
                    head->next=current;
                    prev=head;
                }
            }else{
                prev=current;
                current=current->next;
            }
        }
    }
    return head;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        NODE *head=takeInput();
         NODE *final=bubbleSortLL(head);
        print(final);
    }
}
