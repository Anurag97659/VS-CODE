#include <iostream>
using namespace std;

struct node{
    int data;
    struct node *next;
    struct node *prev;
};
struct node *head = NULL;
struct node *tail = NULL;

void printList(){
    struct node *p = head;
    cout << "\n[";
    while(p != NULL) {
        cout << " " << p->data << " ";
        p = p->next;
    }
    cout << "]";
}

void addatend(int data){
    struct node* temp = new node();
    temp->data = data;
   if(head == NULL){
       head = temp;
       temp->next = NULL;
       temp->prev = NULL;
   }
   else{
        struct node *traverse = head;
        while(traverse->next != NULL){
            traverse = traverse->next;
        }
        temp->prev = traverse;
        traverse->next = temp;
        tail = temp;
     }
}

void addatstart(int data){
    struct node* temp = new node();
    temp->data=data;
    temp->next=head;
    if(head!=NULL){
    head->prev=temp;
    }
    head=temp;
    head->prev=NULL;
    struct node* settail= head;
    while(settail->next!=NULL){
        settail=settail->next;
    }
    tail=settail;
}

void addatany(int data,int where){
    struct node* temp =new node();
    struct node* before=head;
    temp->data=data;
    int i=0;
    while(i!=where-1){
        before=before->next;i++;
    }
    struct node* after=before->next;
    after->prev=temp;
    temp->next=before->next;
    before->next=temp;
    temp->prev=before;
}

void deleteatend(){
    struct node* temp=head;
    while(temp->next!=tail){
        temp=temp->next;
    }
    tail=temp;
    tail->next=NULL;
}

void deleteatstart(){
    struct node* temp=head;
    head=head->next;
    head->prev=NULL;
    temp->next=NULL;
    delete temp;
}

void deleteatany(int a){
    struct node* temp=head;
    int i=0;
    while(i!=a-1 && temp->next!=NULL){
        temp=temp->next;
        i++;
    }
    struct node* setprev = temp->next->next;
    struct node* deletenode= temp->next;
    temp->next=temp->next->next;
    setprev->prev=temp;
    delete deletenode;
}

int main(){
    // addatend(101);
    // addatend(202);
    // addatend(303);
    // addatend(404);
    // addatend(505);
    addatstart(10);
    addatstart(20);
    addatstart(30);
    addatstart(40);
    addatstart(50);
    addatany(35,2);
    printList();
    deleteatany(2);
    printList();
    cout<<endl;
   cout<<endl<<"head = "<<head->data<<"           tail = "<<tail->data;
   cout<<endl<<"1 = "<<head->next->data<<"              3 = "<<tail->prev->data;
   cout<<endl<<"2 = "<<head->next->next->data<<"              2 = "<<tail->prev->prev->data;
   cout<<endl<<"3 = "<<head->next->next->next->data<<"              1 = "<<tail->prev->prev->prev->data;
   cout<<endl<<"4 = "<<head->next->next->next->next->data<<"              0 = "<<tail->prev->prev->prev->prev->data;
   
   return 0;
}