#include <iostream>
using namespace std;

struct node{
    int data;
    struct node *next;
};
struct node *head= NULL;

void display(){
    struct node *display = head;
    while(display != NULL){
        cout<<display->data<<" ";
        display=display->next;
    }cout<<endl;
}

void addatStart(int data){
    struct node *temp =(struct node*) malloc(sizeof(struct node));
    temp->data=data;
    temp->next=head;
    head=temp;
}

void deleteatStart(){
    struct node *del = head;
    head = head->next;
    delete del;
}

void addatEnd(int data){
    struct node *temp =(struct node*)malloc(sizeof(struct node));
    temp->data=data;
    struct node *tempHead = head;
    while(tempHead->next!=NULL){
        tempHead=tempHead->next;
    }
    tempHead->next=temp;
    temp->next=NULL;
}
void deleteatEnd(){
    struct node *tempHead =head;
    int i=0;
    while(tempHead->next!=NULL){
        tempHead=tempHead->next;
        i++;
    }
    struct node *del =tempHead;
    tempHead = head;
    i=i-1;
    int a=0;
    while( tempHead->next!=NULL && a!=i){
            tempHead=tempHead->next;
            a++;
    }
    tempHead->next=NULL;
    delete del;
}
void addatINbetween(int data,int a){
    struct node *temp = (struct node*)malloc(sizeof(struct node));
    temp->data=data;
    struct node *tempHead =head;
    int i=0;
    while(tempHead->next!=NULL && i!=a){
        tempHead=tempHead->next;
        i++;
    }
    struct node *insert = (struct node*)malloc(sizeof(struct node));
    insert->next=tempHead->next;
    tempHead->next=temp;
    temp->next=insert->next;
}
void deleteatInbetween(int a){
    struct node *tempHead = head;
    int i=0;
    while(tempHead->next!=NULL && i!=a-1){
        tempHead=tempHead->next;
        i++;
    }
    struct node *del = tempHead->next;
    tempHead->next=tempHead->next->next;
    delete del;
}

int main(){
    addatStart(5);
    addatStart(15);
    addatStart(50);
    addatStart(150);
    addatEnd(100);
    addatINbetween(55,2);
    display();
    deleteatInbetween(3);
    display();

}