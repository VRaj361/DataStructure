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
    ~Node(){
        int val=this->data;
        if(this->next!=NULL){
            delete next;
            this->next=NULL;
        }
        cout<<"Deleted Node value is "<<val<<endl;
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
    if(t->next==NULL){
        insertAtTail(head,d);
        return;
    }
    temp->next=t->next;
    t->next=temp;    
}

void deleteNode(Node *& head,int position){

    if(position==1){
        Node *temp=head;
        head=head->next;
        temp->next=NULL;
        delete temp;
    }//the case of position 1 means you are deleting first node
    else{
        Node *curr=head;
        Node *prev=NULL;
        int n=1;
        while(n<position){
            prev=curr;
            curr=curr->next;
            n++;
        }
        prev->next=curr->next;       
        curr->next=NULL;
        delete curr;
    }

}

void print(Node *& head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
bool isCircular(Node *head){
    //case 1 for <=1 node
    Node *temp=head;
    if(head->next==NULL||head==NULL){
        return false;
    }
    
    //case 2 for >1 node 
    temp=head->next;
    while(temp!=head&&temp!=NULL){
        temp=temp->next;
    }
    if(temp==head){
        return true;
    }
    if(temp==NULL){
        return false;
    }
    return false;

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
    insertAtMiddle(head,2,50);
    insertAtMiddle(head,2,60);
    print(head);
    //delete the node
    deleteNode(head,6);
    print(head);
    cout<<isCircular(head);

}