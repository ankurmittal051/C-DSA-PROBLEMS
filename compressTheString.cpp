#include <iostream>
#include <cstring>
using namespace std;
void compressTheString(char input[]){
    int len=strlen(input);
    int nextIndex=1;
    for(int i=0;i<len;i++){
        int count=1;
        while(input[i]==input[i+1]){
            count++;
            i++;
        }
        if(count>1){
            input[nextIndex]=count+48;
            nextIndex++;
            input[nextIndex]=input[i+1];
            nextIndex++;
        }else if(count==1){
            input[nextIndex]=input[i+1];
            nextIndex++;
        }
    }
  }
int main(){
    char input[10000];
    cin.getline(input,10000);
    compressTheString(input);
    cout<<input<<endl;
}
