#include <bits/stdc++.h>
#include <string>
using namespace std;

struct node {
 int data;
 struct node *next;
};

struct node *head = NULL;

void printList(){
    struct node *p = head;
    cout << "\n[";
    while(p != NULL) {
        cout << " " << p->data << " ";
        p = p->next;
    }
    cout << "]";
}

void reverse(){
    struct node *prev = NULL;
    struct node *temp = head;
    struct node *k;
    while(temp != NULL){
        k = temp->next;
        temp->next = prev;
        prev = temp;
        temp = k;
    }
    head = prev;
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
         i++;
    }
    struct node *temp=(struct node*) malloc(sizeof(struct node));
    temp->next = linkedlist->next;
    linkedlist->next = lk;
    lk->next =temp->next;
}

void insertatend(int data){
    struct node *lk = new node();
    lk->data = data;
    lk->next=NULL;
    if(head==NULL){
        head=lk;
    }
    struct node *linkedlist = head;
    while(linkedlist->next != NULL ){
    linkedlist = linkedlist->next;
    }
    linkedlist->next=lk; 
}

void deletetionatany(int a){
    struct node *temp = (struct node*) malloc(sizeof(struct node));
    struct node *linkedlist = head;
    int i=0;
    while(linkedlist->next != NULL && i !=a-1){
        linkedlist=linkedlist->next; i++;   
    }
    struct node *tmp = linkedlist->next;
    cout << endl;
    linkedlist -> next = linkedlist -> next -> next;
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

void cycle(){
    //Floyd’s Cycle Detection Algorithm (Tortoise & Hare)
    struct node *first=head;
    struct node *second=head;
    while(second!=NULL && second->next!=NULL){
        first=first->next;
        second=second->next->next;
        if(first==second){
            cout<<"cycle found";
            return;
        }
    }
}
void createCycle(){
    struct node *temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    cout<<endl<<"temp="<<temp->data<<endl<<"temp->next = "<<temp->next<<endl;
    temp->next=head;
    cout<<"cycle created\n";
    cout<<"temp="<<temp->data<<endl<<"temp->next = "<<temp->next->data<<endl;
}

int main(){
   insertatbegin(1);
    insertatbegin(2);
    insertatbegin(3);
    insertatbegin(4);
    insertatend(5);
    printList();
    // createCycle();
    // cycle();

}