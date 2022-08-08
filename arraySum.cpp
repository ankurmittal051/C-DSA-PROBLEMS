#include <iostream>
#include <cmath>
using namespace std;
void arraySum(int input1[],int n,int input2[],int x,int arr[]){
    int k=max(n,x);
    int carry=0;
    for(int i=n-1,j=x-1;i>=0 || j>=0;i--,j--){
        int d1=0;
        int d2=0;
        if(i>=0){
            d1=input1[i];
        }
        if(j>=0){
            d2=input2[j];
        }
        int digit=(d1+d2+carry)%10;
        carry=(d1+d2+carry)/10;
        arr[k]=digit;
        k--;
    }
    arr[k]=carry;
}
int main(){
    int n;
    cin>>n;
    int input1[10000];
    for(int i=0;i<n;i++){
        cin>>input1[i];
    }
    int x;
    cin>>x;
    int input2[10000];
    for(int j=0;j<x;j++){
        cin>>input2[j];
    }
    int arr[100000];
    int outputSize=max(n,x)+1;
    arraySum(input1,n,input2,x,arr);
    for(int i=0;i<outputSize;i++){
        cout<<arr[i]<<" ";
    }
}
