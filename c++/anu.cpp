#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;
    Node* next;  
    Node(int data, Node* left, Node* right){
        this->data = data;
        this->left = left;
        this->right = right;
    }
    Node(int data){
        this->data = data;
        left = NULL;
        right = NULL;
        next = NULL;
    }
    void height(){
        int l=0,r=0;
        while(left!=NULL){
            left = left->left;
            l++;
        }
        while(right!=NULL){
            right = right->right;
            r++;
        }
        int h = max(l,r);
        cout<<h;
    }

};
int main(){
    // cout<<min(1,2,3);
    cout<<max(15,30);
}