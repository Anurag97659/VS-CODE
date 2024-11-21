# include<iostream>
using namespace std;

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
     node* temp=this->head;
    this->head=this->head->next;
   this->head->prev=NULL;
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

};

int main(){
    node a;
    a.addatend(10);
    a.addatstart(20);
    a.addatend(40);
    a.addatend(50);
    a.addatany(30,1);
    a.printList();
    a.deleteatstart();
    cout<<endl<<endl<<"deleteatstart";  
    a.printList();
    a.deleteatend();
    cout<<endl<<endl<<"deleteatend";  
    a.printList();
    a.deleteatany(1);
    cout<<endl<<endl<<"deleteatany(1)";  
    a.printList();
    cout<<endl<<"head = "<<a.head->data<<endl;
    cout<<"tail = "<<a.tail->data<<endl;
    cout<<"head next = "<<a.head->next->data<<endl;
    cout<<"tail prev = "<<a.tail->prev->data<<endl;

}