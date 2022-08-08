#include <iostream>
#include <climits>
using namespace std;
void arrayIntersection(int n,int input1[],int x,int input2[]){
    for(int i=0;i<n;i++){
        for(int j=0;j<x;j++){
            if(input1[i]==input2[j]){
                cout<<input1[i]<<" ";
                input2[j]=INT_MIN;
                break;
            }
        }
    }
}
int main(){
    int n;
    cin>>n;
    int input1[1000];
    for(int i=0;i<n;i++){
        cin>>input1[i];
    }
    int x;
    cin>>x;
    int input2[1000];
    for(int j=0;j<x;j++){
        cin>>input2[j];
    }
    arrayIntersection(n,input1,x,input2);
   }
