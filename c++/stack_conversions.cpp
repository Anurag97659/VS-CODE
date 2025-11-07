#include <iostream>
#include <stack>
#include <string>
#include <algorithm>
using namespace std;

int precedence(char a){
    if(a == '^') return 3;
    else if(a == '/' || a == '*') return 2;
    else if(a == '+' || a == '-') return 1;
    return -1;
}

string infix_to_postfix(string a){
    stack<char> s;
    string output = "";
    for(int i = 0; i < a.length(); i++){
        char c = a[i];
        if((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9'))output += c;
        else if(c == '(')s.push(c);
        else if(c == ')'){
            while(!s.empty() && s.top() != '('){
                output += s.top();
                s.pop();
            }
            if(!s.empty() && s.top() == '(') s.pop();
        }
         else{                              
            while(!s.empty() && precedence(c) < precedence(s.top())){
                output += s.top();
                s.pop();
            }
            s.push(c);
        }
    }
    while(!s.empty()){
        output += s.top();
        s.pop();
    }
    return output;
}

string infix_to_prefix(string a){
    reverse(a.begin(),a.end());
    for(int i=0;i<a.length();i++){
        if(a[i]=='(')a[i]=')';
        else if( a[i]==')')a[i]='(';
    }
//-------------------------infix to postfix------------------------------------
    stack<char> s;
    string output = "";
    for(int i = 0; i < a.length(); i++){
        char c = a[i];
        if((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9'))output += c;
        else if(c == '(')s.push(c);
        else if(c == ')'){
            while(!s.empty() && s.top() != '('){
                output += s.top();
                s.pop();
            }
            if(!s.empty() && s.top() == '(') s.pop();
        }
         else{                              
            while(!s.empty() && precedence(c) <= precedence(s.top())){
                output += s.top();
                s.pop();
            }
            s.push(c);
        }
    }
    while(!s.empty()){
        output += s.top();
        s.pop();
    }
//---------------------------------------------------------------------------
    string ans=output;
    reverse(ans.begin(),ans.end());
    return ans;
}
  
string postfix_to_infix(string a){
    //  operand1 + operator + operand2
    stack<string> s;
    string output;
    for(int i=0;i<a.length();i++){
        char c = a[i];
        if((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9')){
            string c1 = "";
            c1+=c;
            s.push(c1);
        } 
        else{
            if(s.size()>=2){
                string a2 = s.top();
                s.pop();
                string a1 = s.top();
                s.pop();
                string add = "";
                add = "(" + a1 + c + a2 + ")";
                s.push(add);
            }
        }
        output=s.top();
    }
    return output; 
}

string postfix_to_prefix(string a){
    //   string = operator + operand2 + operand1 
    stack<string>s;
    for(int i=0;i<a.length();i++){
        if((a[i]>='a'&& a[i]<='z') || (a[i]>='A' && a[i]<='Z') || (a[i]>='0' && a[i]<='9')){
            string c="";
            c+=a[i];
            s.push(c);
        }
        else{
            if(s.size()>=2){
                string o1 = s.top();s.pop(); 
                string o2 = s.top();s.pop(); 
                string b = "";
                b=a[i]+o2+o1;
                s.push(b);
            }
        }
    }
    return s.top();
}

string prefix_to_infix(string a){
    // operator + operand2 + operand1
    // from right to left (loop)
    stack<string>s;
    for(int i=a.length()-1;i>=0;i--){
        if((a[i]>='a'&& a[i]<='z') || (a[i]>='A' && a[i]<='Z') || (a[i]>='0' && a[i]<='9')){
            string c="";
            c+=a[i];
            s.push(c);
        }
        else{
            if(s.size()>=2){
                string o1 = s.top();s.pop(); 
                string o2 = s.top();s.pop(); 
                string b = "";
                b = "("+o1 + a[i] + o2 +")";
                s.push(b);
            }
        }
    }
    return s.top();
}

string prefix_to_postfix(string a){
    //   string = operand1 + operand2 + operator
    // from right to left (loop)
    stack<string>s;
    for(int i=a.length()-1;i>=0;i--){
        if((a[i]>='a'&& a[i]<='z') || (a[i]>='A' && a[i]<='Z') || (a[i]>='0' && a[i]<='9')){
            string c="";
            c+=a[i];
            s.push(c);
        }
        else{
            if(s.size()>=2){
                string o1 = s.top();s.pop(); 
                string o2 = s.top();s.pop(); 
                string b = "";
                b = o1 + o2 + a[i];
                s.push(b);
            }
        }
    }
    return s.top();
}

int main(){
    string infix ="a*(b+c)/d";
    string postfix = infix_to_postfix(infix);
    string prefix = infix_to_prefix(infix);
    cout<<"Infix Expression: "<<infix<<endl;
    cout<<"Infix to Postfix: "<<postfix<<endl;
    cout<<"Infix to Prefix: "<<prefix<<endl;  
    cout<<"-------------------------------------"<<endl;
    cout<<"Postfix Expression: "<<postfix<<endl;
    cout<<"Postfix to Infix: "<<postfix_to_infix(postfix)<<endl;
    cout<<"Postfix to Prefix: "<<postfix_to_prefix(postfix)<<endl;
    cout<<"-------------------------------------"<<endl;
    cout<<"Prefix Expression: "<<prefix<<endl;
    cout<<"Prefix to Infix: "<<prefix_to_infix(prefix)<<endl;
    cout<<"Prefix to Postfix: "<<prefix_to_postfix(prefix)<<endl;
    cout<<"-------------------------------------"<<endl;
    return 0;
}
