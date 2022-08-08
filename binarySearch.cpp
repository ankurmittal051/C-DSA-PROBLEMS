#include <iostream>
using namespace std;
int binarySearch(int n,int input[],int val){
    int start=0;
    int end=n-1;
    while(start<=end){
        int mid=(start+end)/2;
        if(input[mid]==val){
          return mid;
        }else if(input[mid]>val){
            end=mid-1;
        }else{
            start=mid+1;
        }

    }
}
int main(){
    int n;
    cin>>n;
    int input[1000];
    for(int i=0;i<n;i++){
        cin>>input[i];
    }
    int val;
    cin>>val;
    int ans=binarySearch(n,input,val);
    cout<<ans<<endl;
}