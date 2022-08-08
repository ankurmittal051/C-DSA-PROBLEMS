#include <iostream>
#include <cmath>
#include <cstring>
using namespace std;
bool helper(char input[],int start,int end){
    if(start>=end){
        return true;
    }
    if(input[start]!=input[end]){
        return false;
    }
    return helper(input,start+1,end-1);
}
bool isPalindrome(char input[]){
    int len=strlen(input);
    return helper(input,0,len-1);
}
int main(){
    char input[100000];
    cin>>input;
    if(isPalindrome(input)){
        cout<<"TRUE"<<endl;
    }else{
        cout<<"FALSE"<<endl;
    }
    }
