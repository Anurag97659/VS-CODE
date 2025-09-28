#include<iostream>
#include <list>
using namespace std;

// 1 using stl list
class queue_list{
    list<int> a;
    public:
    void push(int data){
        a.push_back(data);
        cout<<a.back()<<" is added in the queue\n";
    }
    void pop(){
        if(a.size()>0){
            int b= a.front();
            a.pop_front();
            cout<<b<<" is removed from the queue\n";
        }
        else cout<<" queue is empty\n";
    }
    void top(){
        if(a.size()>0) cout<<a.front()<<" on top\n";
        else cout<<"queue is empty\n";
    }
    void size(){
        cout<<a.size()<<" is the size of queue\n";
    }
    bool isEmpty(){
        if(a.size()>0)return 0;
        else return 1;
    }
};

// 2 using custom linkedlist
class node{
    public:
    int data;
    node* next;
    node* prev;
    node* head;
    node* tail;

    node(){
        head=NULL;
        tail=NULL;
    }

    node(int data, node*next ,node*prev){
        this->data=data;
        this->next=next;
        this->prev=prev;
        next=NULL;
        prev=NULL;
    }

    void printList(){
     node *p = this->head;
    cout << "\n[";
    while(p != NULL) {
        cout << " " << p->data << " ";
        p = p->next;
        }
        cout << "]";
    }

    void addatend(int data){
     node* temp =  new node(data,NULL,NULL);
    temp->data = data;
   if(this->head == NULL){
       head = temp;
       temp->next = NULL;
       temp->prev = NULL;
   }
   else{
         node *traverse = this->head;
        while(traverse->next != NULL){
            traverse = traverse->next;
        }
        temp->prev = traverse;
        traverse->next = temp;
        tail = temp;
     }
}


void addatstart(int data){
    node* temp = new node();
    temp->data=data;
    temp->next=this->head;
    if(this->head!=NULL){
    this->head->prev=temp;
    }
    this->head=temp;
    this->head->prev=NULL;
     node* settail= this->head;
    while(settail->next!=NULL){
        settail=settail->next;
    }
    this->tail=settail;
}

void addatany(int data,int where){
     node* temp =new node();
     node* before=this->head;
    temp->data=data;
    int i=0;
    while(i!=where-1){
        before=before->next;i++;
    }
     node* after=before->next;
    after->prev=temp;
    temp->next=before->next;
    before->next=temp;
    temp->prev=before;
}

void deleteatend(){
     node* temp=this->head;
    while(temp->next!=this->tail){
        temp=temp->next;
    }
    this->tail=temp;
    this->tail->next=NULL;
}

void deleteatstart(){
    if(this->head==NULL)return;
    node* temp=this->head;
    this->head=this->head->next;
    if(this->head!=NULL)this->head->prev=NULL;
    temp->next=NULL;
    delete temp;
}

void deleteatany(int a){
     node* temp=this->head;
    int i=0;
    while(i!=a-1 && temp->next!=NULL){
        temp=temp->next;
        i++;
    }
     node* setprev = temp->next->next;
     node* deletenode= temp->next;
    temp->next=temp->next->next;
    setprev->prev=temp;
    delete deletenode;
}
int size(){
    node*temp =this->head;
    int count=0;
    while(temp!=NULL){
        temp=temp->next;
        count++;
    }
    return count;
}

};

class queue{
    node a;
    public:
    void push(int data){
        if(a.head==NULL)a.addatstart(data);
        else a.addatend(data);
        cout<<a.tail->data<<" is added in the queue\n";
    }   
    void pop(){
        if(a.head!=NULL){
        int b=a.head->data;
        a.deleteatstart();
        cout<<b<<" is removed from the queue\n";}
        else cout<<"queue is empty\n";
    }
    void top(){
        if(a.head!=NULL){
            cout<<a.head->data<<" on top\n";
        }
        else cout<<"queue is empty\n";
    }
    void size(){
        cout<<a.size()<<" is the size of queue\n";
    }
    bool isempty(){
        if(a.size()!=0)return 0;
        else return 1;
    }
};

int main(){
    queue_list b;
    b.push(1);    
    b.push(2);    
    b.push(3);    
    b.push(4);    
    b.push(5); 
    while(!b.isEmpty()){
        b.size();
        b.top();
        b.pop();
    }   
    b.size();
    b.top();
    b.pop();
    queue a;
    a.push(1);
    a.push(2);
    a.push(3);
    a.push(4);
    a.push(5);
    while(!a.isempty()){
        a.size();
        a.top();
        a.pop();
    }
    a.size();
    a.top();
    a.pop();
}