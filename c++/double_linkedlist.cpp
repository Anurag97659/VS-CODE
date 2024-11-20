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

int main(){
    addatend(101);
    addatend(202);
    addatend(303);
    addatend(404);
    addatend(505);
    printList();
    cout<<endl;
   cout<<endl<<"head = "<<head->data<<"              tail = "<<tail->data;
   cout<<endl<<"1 = "<<head->next->data<<"              3 = "<<tail->prev->data;
   cout<<endl<<"2 = "<<head->next->next->data<<"              2 = "<<tail->prev->prev->data;
   cout<<endl<<"3 = "<<head->next->next->next->data<<"              1 = "<<tail->prev->prev->prev->data;
   cout<<endl<<"4 = "<<head->next->next->next->next->data<<"              0 = "<<tail->prev->prev->prev->prev->data;
   return 0;
}