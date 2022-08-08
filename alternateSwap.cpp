#include <iostream>
using namespace std;
void sWappAlternate(int n,int input[]){
    for(int i=0;i<n-1;i=i+2){
       int temp=input[i];
       input[i]=input[i+1];
       input[i+1]=temp;
    }
}
int main(){
    int n;
    cin>>n;
    int input[1000];
    for(int i=0;i<n;i++){
        cin>>input[i];
    }
    sWappAlternate(n,input);
    for(int i=0;i<n;i++){
        cout<<input[i]<<" ";
    }
}
