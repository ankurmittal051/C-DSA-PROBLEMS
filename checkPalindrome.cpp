#include <iostream>
#include <cmath>
#include <cstring>
using namespace std;
bool checkPalindrome(char input[]){
    int len=strlen(input);
    int i=0;
    int j=len-1;
    while(i<j){
        if(input[i++]!=input[j--]){
            return false;
        }
    }
    return true;
}
int main(){
   char input[10000];
   cin.getline(input,10000);
   if(checkPalindrome(input)){
       cout<<"TRUE"<<endl;
   }else{
       cout<<"FALSE"<<endl;
   }
}
