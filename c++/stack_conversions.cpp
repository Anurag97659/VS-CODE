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

        if((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9')){
            output += c;
        }

        else if(c == '('){
            s.push(c);
        }

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
    return output;
}

string infix_to_prefix(string a){
    reverse(a.begin(),a.end());
    for(int i=0;i<a.length();i++){
        if(a[i]=='(')a[i]=')';
        else if( a[i]==')')a[i]='(';
    }
    string ans=infix_to_postfix(a);
    reverse(ans.begin(),ans.end());
    return ans;
}
  
string postfix_to_infix(string a){
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


int main(){
    // string a = "a+b*(c^d-e)^(f+g*h)-i";   
    // string b = "a+b*(c^d-e)^(f+g*h)-i";   
    // string c = "a+(b*c)";
    // cout<< infix_to_prefix(c)<<endl;// +a*bc
    // cout<< infix_to_postfix(c)<<endl;// abc*+
    // cout<< infix_to_postfix(b)<<endl;// abcd^e-fgh*+^*+i-
    // cout<< infix_to_prefix(b)<<endl;// -+a*b^-^cde+f*ghi 
    string a1 = "abcd^e-fgh*+^*+i-";
    cout<<postfix_to_infix(a1);
}
