#include <iostream>
using namespace std;
void merge(int input[],int start,int end){
    int mid=(start+end)/2;
    int i=start;
    int j=mid+1;
    int k=start;
    int temp[100000];
    while(i<=mid && j<=end){
        if(input[i]>input[j]){
            temp[k]=input[j];
            j++;
            k++;
        }else{
            temp[k]=input[i];
            i++;
            k++;
        }
    }
    while(i<=mid){
        temp[k]=input[i];
        i++;
        k++;
    }
    while(j<=end){
        temp[k]=input[j];
        j++;
        k++;
    }
    for(int i=start;i<=end;i++){
        input[i]=temp[i];
    }
}
void pass(int input[],int start,int end){
    if(start>=end){
        return;
    }
    int mid=(start+end)/2;
    pass(input,start,mid);
    pass(input,mid+1,end);
    merge(input,start,end);
    }
void mergeSort(int input[],int n){
    pass(input,0,n-1);
}
int main(){
    int n;
    cin>>n;
    int input[100000];
    for(int i=0;i<n;i++){
        cin>>input[i];
    }
    mergeSort(input,n);
    for(int i=0;i<n;i++){
        cout<<input[i]<<" ";
    }
}
