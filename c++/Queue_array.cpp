#include<iostream>
using namespace std;

class Queue{
    int size;
    int *arr;
    int last;
    int top;
public:
    Queue(){
        top = 0;
        size = 100;
        last = -1;
        arr = new int[size];
    }
    ~Queue(){
        delete[] arr;
    }
    void view(){
        if(top > last){
            cout<<"Queue is empty"<<endl;
            return;
        }
        cout<<endl<<"[ ";
        for(int i = top;i <= last;i++){
            cout<<arr[i]<<" ";
        }
        cout<<"]"<<endl;
    }
    int push(int data){
        if(last + 1 >= size){
            cout<<"Queue is full!"<<endl;
            return -1;
        }
        last++;
        arr[last] = data;
        cout<<data<<" is inserted at index "<<last<<endl;
        return last;
    }
    int pop(){
        if(top <= last){
            cout<<arr[top]<<" is removed from queue"<<endl;
            top++;
            if(top > last){  
                top = 0;
                last = -1;
            }
        }
        else{
            cout<<"Queue is empty!"<<endl;
        }
        return top;
    }
    int Size(){
        if(top > last) return 0;
        return (last - top + 1); 
    }
    bool isEmpty(){
        return top > last;
    }
    int front(){
        if(top <= last){
            return arr[top];
        }
        cout<<"Queue is empty!"<<endl;
        return -1;
    }
    int back(){
        if(top <= last){
            return arr[last];
        }
        cout<<"Queue is empty!"<<endl;
        return -1;
    }
};

int main(){
    Queue q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    
    while(!q.isEmpty()){
        q.pop();
        q.view();
        cout<<"Front: "<<q.front()<<endl;
        cout<<"Back: "<<q.back()<<endl;
        cout<<"Size of queue: "<<q.Size()<<endl;
    }
    
    return 0;
}
