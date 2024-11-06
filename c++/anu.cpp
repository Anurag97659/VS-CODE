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
 cout << " ";
 while(p != NULL) {
 cout << " " << p->data << " ";
 p = p->next;
 }
 cout << " ";
}

void insertatbegin(int data){
 struct node *lk = (struct node*) malloc(sizeof(struct node));
 lk->data = data;
 lk->next = head;
 head = lk;
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


int main(){
    insertatbegin(1);
    insertatbegin(2);
    insertatbegin(3);
    insertatbegin(4);
    printList();
    reverse();
    printList();
}