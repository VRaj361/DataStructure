#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node *prev;
        Node *next;
    Node(int data){
        this->data=data;
        this->prev=NULL;
        this->next=NULL;
    }
};
void print(Node *head){
    Node *temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
void insertHead(Node *&head,int data){
    Node* temp=new Node(data);
    temp->next=head;
    head->prev=temp;
    head=temp;
}
void insertTail(Node *&tail,int data){
    Node* temp=new Node(data);
    tail->next=temp;
    temp->prev=tail;
    tail=temp;
}
void insertAtPosition(Node *&tail,Node *&head,int position,int data){
    if(position==0){
        insertHead(head,data);
        return;
    }
    Node *temp=head;
    int count=1;
    while(count<position){
        temp=temp->next;
        count++;
    }
    if(temp->next==NULL){
        insertTail(tail,data);
        return;
    }
    Node* node=new Node(data);
    node->next=temp->next;
    temp->next->prev=node;
    temp->next=node;
    node->prev=temp;
    

}
int main(){
    Node *n1=new Node(10);
    Node *head=n1;
    Node *tail=n1;
    print(head);
    //insert head
    insertHead(head,12);
    print(head);
    //insert end
    insertTail(tail,8);
    print(head);
    //insertAtPosition
    insertAtPosition(tail,head,3,11);
    print(head);
}