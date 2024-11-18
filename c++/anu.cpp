#include <iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};

class Solution {
  public:
  Node *head;
    Node *insertAtEnd(Node *head, int x) {
         this->head = head;
         Node* temp = head;
         Node* newnode = new Node(x);
         while(temp->next!=NULL){
             temp=temp->next;
         }
         temp->next= newnode;
    }

    Node *display(){
            Node* temp1 = head;
            while(temp1!=NULL){
                cout<<temp1->data<<" ";
                temp1=temp1->next;
            }
    }
};
int main(){
     Solution a;
        Node* head = new Node(10);
        a.insertAtEnd(head,1550);
        a.insertAtEnd(head,20);
        a.insertAtEnd(head,30);
        a.display();
}