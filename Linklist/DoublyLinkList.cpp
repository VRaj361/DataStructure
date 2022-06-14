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
    ~Node(){
        int val=this->data;
        if(this->next!=NULL){
            delete next;
            this->next=NULL;
        }
        cout<<"Delete node is "<<val<<endl;
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
void deleteNode(Node *& head,int position){
    if(position==1){
        Node *temp=head;
        head=temp->next;
        temp->next->prev=NULL;
        temp->next=NULL;
        delete temp;
    }else{
        Node *curr=head;
        Node *pre=NULL;
        int count=1;
        while(count<position){
            pre=curr;
            curr=curr->next;
            count++;
        }
        pre->next=curr->next;
        curr->prev=NULL;
        curr->next=NULL;
        delete curr;
    }
}

void reverse(Node *head,Node *tail){
    if(head==NULL||head->next==NULL){
        return ;
    }
    Node *pre=NULL;
    Node *curr=head;
    while(curr!=NULL){
        //4 item 
        pre=curr->prev;
        curr->prev=curr->next;
        curr->next=pre;
        curr=curr->prev;//increment the node for loop
    }
    curr=pre->prev;//last second node prev means last node
    while(curr!=NULL){
        cout<<curr->data<<" ";
        curr=curr->next;
    }
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
    insertAtPosition(tail,head,1,11);
    print(head);
    //deleteposition
    deleteNode(head,4);
    print(head);
    reverse(head,tail);
    
}