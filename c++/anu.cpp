#include <bits/stdc++.h>
#include <string>
using namespace std;
struct node {
 int data;
 struct node *next;
};
struct node *head = NULL;
struct node *current = NULL;

void printList(){
 struct node *p = head;
 cout << "\n[";
 while(p != NULL) {
 cout << " " << p->data << " ";
 p = p->next;
 }
 cout << "]";
}

void insertatbegin(int data){
 struct node *lk = (struct node*) malloc(sizeof(struct node));
 lk->data = data;
 lk->next = head;
 head = lk;
}
void insertbed(int data,int x){
 struct node *lk = (struct node*) malloc(sizeof(struct node));
 lk->data = data;
 struct node *linkedlist = head;
 int i=0;
 while(linkedlist->next != NULL && i!=x){
 linkedlist = linkedlist->next;
 i++;}
 struct node *temp=(struct node*) malloc(sizeof(struct node));
 temp->next = linkedlist->next;
 linkedlist->next = lk;
 lk->next =temp->next;
}

int main(){
 insertatbegin(12);
 insertatbegin(11);
 insertatbegin(10);
 insertatbegin(9);
 insertatbegin(8);
 printList();
 insertbed(100,2);
 
 cout << "Linked List: ";
 printList();
}