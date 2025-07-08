#include<iostream>
#include<stack>
using namespace std;

class Queue{
    stack<int>a;
    public:
    void Push(int data){
        stack<int> temp;

        while(!a.empty()){
            temp.push(a.top());
            a.pop();
        }
        a.push(data);
        cout<<a.top()<<" is added in the queue \n";
        while(!temp.empty()){
            a.push(temp.top());
            temp.pop();
         }
    }
    void Pop(){
        if(a.size()<0) cout<<"queue is empty\n";
        else{
            cout<<a.top()<<" is removed from queue\n";
            a.pop();
        }
    }

    void Top(){
        cout<<a.top()<<" on top \n";
    }
    void Size(){
        cout<<a.size()<<"is size of the queue\n";
    }
    bool isempty(){
        if(a.size()>0)return 0;
        return 1;
    }

};

int main(){
    Queue a;
    a.Push(1);
    a.Push(2);
    a.Push(3);
    a.Push(4);
    a.Push(5);
    while(!a.isempty()){
        a.Top();
        a.Size();
        a.Pop();
    }

}
