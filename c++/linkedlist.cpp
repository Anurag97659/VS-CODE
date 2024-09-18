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

void insertatend(int data){
    struct node *lk = (struct node*) malloc(sizeof(struct node));
    lk->data = data;
    struct node *linkedlist = head;
    while(linkedlist->next != NULL ){
    linkedlist = linkedlist->next;
    }
    linkedlist->next=lk;// some error is there   
      lk->next=NULL;
}

void deletetionatany(int a){
    struct node *temp = (struct node*) malloc(sizeof(struct node));
    struct node *linkedlist = head;
    int i=0;
    while(linkedlist->next != NULL && i !=a-1){
        linkedlist=linkedlist->next; i++;   
    }
    // cout<<linkedlist->data;
    struct node *tmp = linkedlist->next;
    cout << endl;
    cout << linkedlist->next << endl;
    cout << &tmp << endl;
    cout << tmp << endl;
    linkedlist -> next = linkedlist -> next -> next;
    cout << "After change" << endl;
    cout << linkedlist -> next << endl;
    cout << tmp << endl;
    cout << tmp -> data << endl;
}

void deleltetionatstart(){
    struct node* temp = head;
    head=head->next;
    delete temp;
}

void deletetionatend(){
    struct node* temp = head;
    int a =-1;
    while(temp->next!=NULL){temp=temp->next;a++;}
    struct node* del = temp;
    int i=0;temp = head;
    while(temp->next!=NULL && i!=a){temp=temp->next;i++;}
    temp->next=NULL;
    cout<<temp->data<<endl;
    cout<<temp->next<<endl;
}

int main(){
 insertatbegin(12);
 insertatbegin(11);
insertatend(13);
deletetionatend();
//  insertatbegin(10);
//  insertatbegin(9);
//  insertatbegin(8);
//  cout<<endl<<"linkedlist "<<endl;
//  printList();
//  cout<<endl<<"linkedlist inserted "<<endl;
//  insertbed(100,2);
//  printList();
//  deletetionatany(3);
//  cout <<endl <<"Linkedlist deleted ";
 printList();
}