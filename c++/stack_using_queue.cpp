#include<iostream>
#include<queue>
using namespace std;

class Stack{

    queue<int>a;

    public:

    void Push(int data){
        int b= a.size();
        a.push(data);
        for(int i=0;i<b;i++){
            a.push(a.front());
            a.pop();
        }
        cout<<a.front()<<" is inserted in the stack\n";
    }

    void Pop(){
        if(a.size()==0) cout<<"Stack is empty\n";
        else{
            cout<<a.front()<<" is deleted from stack\n";
            a.pop();
        }
    }

    int Size(){
        cout<<"size of stack : "<<a.size()<<endl;
        return a.size();
    }
    int Top(){
        if(a.size()==0) cout<<"stack is empty\n";
        else cout<<a.front()<<" on Top\n";
        return a.front();
    }
    bool isEMpty(){
        if(a.size()>0)return 0;
        return 1;
    }
    
};

int main(){
    Stack a;
    a.Push(1);
    a.Push(2);
    a.Push(3);
    a.Push(4);
    // while(!a.isEMpty()){
    //     a.Size();
    //     a.Top();
    //     a.Pop();
    // }
    // a.Pop();
    // a.Top();
}