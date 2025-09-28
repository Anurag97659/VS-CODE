#include <iostream>
using namespace std;
#include <iomanip>

class Node{
    public:
    int data;
    Node* left;
    Node* right;
    Node(int data){
        this->data = data;
        left = NULL;
        right = NULL;
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
     void printTree(int space = 0, int levelGap = 5) {
        if (!this) return;
        space += levelGap;
        if (right) right->printTree(space, levelGap);
        cout << endl;
        cout << setw(space) << data << endl;
        if (left) left->printTree(space, levelGap);
    }
};
int main(){
     Node* n1 = new Node(1);
     n1->left = new Node(2);
     n1->right = new Node(3);
     n1->left->left = new Node(4);
     n1->left->right = new Node(5);
     n1->right->left = new Node(6);
     n1->right->right = new Node(7);
     n1->printTree();
     cout<<"Height of tree is: ";
    n1->height();

}