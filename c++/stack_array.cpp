#include <iostream>
using namespace std;

class Stack{
    int top;
    int size;
    int *arr;
    public:
        Stack(){
            top=-1;
            size=100;
            arr=new int [size];
        }
        void view(){
            cout<<"[ ";
            for(int i=0;i<=top;i++){
                cout<<arr[i]<<" ";
            }cout<<"]"<<endl;
        }
        int push(int data){
            top++;
            arr[top]=data;
            cout<<"data inserted at index "<<top<<" is = "<<arr[top]<<endl;
            return top;
        }
        int pop(){
            int data = arr[top];
            cout<<arr[top]<<" is removed from the stack, was at index = "<<top<<endl;
            top--;
            return top;
        }
        int Top(){
            cout<<"Data at TOP = "<<arr[top]<<endl;
            return top;
        }
        int Size(){
            return top+1;
        }
};

int main(){
    Stack a;
    a.push(5);
    a.push(6);
    a.push(7);
    a.push(8);
    a.Top();
    cout<<a.Size()<<endl;
    a.view();
    a.pop();
    a.view();
    cout<<a.Size()<<endl;

}