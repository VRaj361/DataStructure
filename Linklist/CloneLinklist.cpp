#include<iostream>
#include<unordered_map>
using namespace std;
class Node {
public:
    int data;
    Node* next;
    Node* random;
    
    Node(int _val) {
        data = _val;
        next = NULL;
        random = NULL;
    }
};

void insertTail(Node* &head,Node* &tail,int d){
    Node *n=new Node(d);
    if(head==NULL){
        head=n;
        tail=n;
        return;
    }else{
        tail->next=n;
        tail=n;
        
    }
}

Node* copyList(Node *head){
    Node* chead=NULL;
    Node* cTail=NULL;
    Node *temp=head;
    //step 1 to copy all the elements 
    while(temp!=NULL){
        insertTail(chead,cTail,temp->data);
        temp=temp->next;
    }

    //step2 create map and 
    unordered_map<Node *,Node *> m;
    Node *temp2=chead;
    temp=head;
    while(temp!=NULL&&temp2!=NULL){
        
        m[temp]=temp2;
        temp=temp->next;
        temp2=temp2->next;
    }

    //step 3 set the pointer on head and after match the node for random pointer
    temp=head;
    temp2=chead;
    while(temp!=NULL){
        temp2->random=m[temp->random];
        temp=temp->next;
        temp2=temp2->next;
    }
    return chead;
}
Node *copyList1(Node *head){
    Node *chead=NULL;
    Node *cTail=NULL;
    Node *temp=head;
    //step 1 create clone list
    while(temp!=NULL){
        insertTail(chead,cTail,temp->data);
        temp=temp->next;
    }

    //step 2 clonenodes all the nodes between original nodes
    Node *o=head;
    Node *c=chead;
    while(o!=NULL&&c!=NULL){
        Node *next=o->next;
        o->next=c;
        o=next;

        next=c->next;
        c->next=o;
        c=next;
    }

    //step 3 point all the random pointer same as original and clone lists
    temp=head;
    while(temp!=NULL){
        if(temp->next!=NULL){
            temp->next->random=temp->random?temp->random->next:temp->random;
        }
        temp=temp->next->next;
    }

    //step 4 revert all the elements in list
    o=head;
    c=chead;
    while(o!=NULL&&c!=NULL){
        o->next=c->next;
        o=o->next;
        if(o!=NULL){
        c->next=o->next;//this should be error because as a previous step you will increament }originallist and here also do again
        }
        c=c->next;
    }
    //step 5 return clonelist head
    return chead;
}
void print(Node *&head){
    
    Node *temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    temp=head;
    cout<<endl;
    do{
        cout<<temp->data<<" ";
        temp=temp->random;
    }while(temp->data!=1);
        
    
}
int main(){

    Node *head=new Node(1);
    Node *head1=new Node(2);
    Node *head2=new Node(3);
    Node *head3=new Node(4);
    Node *head4=new Node(5);

    head->next=head1;
    head1->next=head2;
    head2->next=head3;
    head3->next=head4;
    
    head->random=head2;
    head2->random=head4;
    head4->random=head1;
    head3->random=head2;
    head1->random=head;
    print(head);
    head=copyList1(head);
    print(head);
}