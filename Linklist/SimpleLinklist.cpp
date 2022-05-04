#include<iostream>
using namespace std;
class Node{
    public:
        int data;
        Node *next;
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};

void insertAtHead(Node* &head,int d){
    Node* temp=new Node(d);
    temp->next=head;
    head=temp;
}

void insertAtTail(Node *& tail,int d){
    Node* temp=new Node(d);
    tail->next=temp;
    tail=temp;
}

void insertAtMiddle(Node *& head,int position,int d){
    if(position==0){
        insertAtHead(head,d);
        return;
    }
    Node* t=head;
    Node *temp =new Node(d);
    int count =1;
    while(count<position){
        t=t->next;
        count++;
    }
    if(temp->next==NULL){
        insertAtTail(head,d);
        return;
    }
    temp->next=t->next;
    t->next=temp;    
}

void print(Node *& head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
int main(){
    Node *n=new Node(10);
    // cout<<n->data<<endl;
    // cout<<n->next<<endl;

    Node *head=n;
    Node *tail=n;
    print(head);
    insertAtHead(head,20);   
    print(head);
    //insert at the end
    insertAtTail(tail,30);
    print(head);
    insertAtTail(tail,40);
    print(head);
    //insert at the middle position
    insertAtMiddle(head,1,50);
    insertAtMiddle(head,2,60);
    print(head);


}