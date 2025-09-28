#include <iostream>
#include <stack>
using namespace std;

int precedence(char a){
    if(a == '^') return 3;
    else if(a == '/' || a == '*') return 2;
    else if(a == '+' || a == '-') return 1;
    return -1;
}

void infix_to_postfix(string a){
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
    cout<<output;
}

int main(){
    string a = "a+b*(c^d-e)^(f+g*h)-i";
    infix_to_postfix(a);
}
