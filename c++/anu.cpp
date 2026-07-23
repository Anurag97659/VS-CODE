#include <iostream>
#include <stack>
#include <vector>
using namespace std;

int conversion (string temp){
    int result = 0;
        for(int i = 0; i < temp.size(); i++){
            if(temp[i] >= '0' && temp[i] <= '9'){
                result = result * 10 + (temp[i] - '0');
            } 
            else if(temp[i] == '+'){
                result += (temp[i+1] - '0');
                i++;
            } 
            else if(temp[i] == '-'){
                result -= (temp[i+1] - '0');
                i++;
            } 
            else if(temp[i] == '*'){
                result *= (temp[i+1] - '0');
                i++;
            } 
            else if(temp[i] == '/'){
                result /= (temp[i+1] - '0');
                i++;
            }
        }
    return result;
}

int main(){
    vector<string> tokens ={"2", "3", "+", "4", "*"};
    stack<string>infix;
        for(int i = 0; i < tokens.size(); i++){
            if(tokens[i] != "+" && tokens[i] != "-" && tokens[i] != "/" && tokens[i] != "*"){
                infix.push(tokens[i]);
            } 
            else{
                string op = tokens[i];
                string operand2 = infix.top();
                infix.pop();
                string operand1 = infix.top();
                infix.pop();
                string temp = operand1 + op + operand2;
                int result = conversion(temp);
                infix.push(to_string(result));
            }
        }
    cout << infix.top() << endl;
    cout << conversion(infix.top()) << endl;

        
        
}