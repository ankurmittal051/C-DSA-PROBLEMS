#include <iostream>
#include <stack>
using namespace std;
bool isBalanced(string str){
    stack <char>s;
    int len=str.size();
    bool ans=true;
    for(int i=0;i<len;i++){
        if(str[i]=='(' || str[i]=='{' || str[i]=='['){
            s.push(str[i]);
        }else if(!s.empty() && str[i]==')'){
            if(s.top()=='('){
                s.pop();
            }else{
                ans=false;
                break;
            }
        }else if(!s.empty() && str[i]=='}'){
            if(s.top()=='{'){
                s.pop();
            }else{
                ans=false;
                break;
            }
        }else if(!s.empty() && str[i]==']'){
            if(s.top()=='['){
                s.pop();
            }else{
                ans=false;
                break;
            }
        }
    }
    if(!s.empty()){
            return false;
        }
    return ans;
}
int main(){
    string str;
    cin>>str;
    if(isBalanced(str)){
        cout<<"TRUE"<<endl;
    }else{
        cout<<"FALSE"<<endl;
    }
}
