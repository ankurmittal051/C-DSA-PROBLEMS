#include <iostream>
#include <climits>
#include <cstring>
using namespace std;
bool checkPermutations(char input1[],char input2[]){
    if(strlen(input1)!=strlen(input2)){
        return false;
    }
    int arr[256]={0};
    int len=strlen(input1);
    for(int i=0;i<len;i++){
        arr[input1[i]]++;
    }
    for(int i=0;i<len;i++){
        arr[input2[i]]--;
    }
    for(int i=0;i<256;i++){
        if(arr[i]!=0){
            return false;
        }
    }
    return true;
}
int main(){
    char input1[10000];
    cin.getline(input1,10000);
    char input2[10000];
    cin.getline(input2,10000);
    if(checkPermutations(input1,input2)){
        cout<<"TRUE"<<endl;
    }else{
        cout<<"FALSE"<<endl;
    }
   }
