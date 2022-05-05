#include<iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};
int getLength(Node *head){
	int count=0;
	while(head!=NULL){
		head=head->next;
		count++;
	}
	
	return count;
}
Node *getNode(Node *&head){
    
	if(head==NULL||head->next==NULL){
		return head;
	}
	Node *s=head;
	Node *f=head;
	while(f!=NULL&&f->next!=NULL){
        
		if(f->next->next==NULL){
			
			f=f->next;
		}else{
			f=f->next->next;
		}
		s=s->next;
        
	}
    
    // cout<<s->data<<endl;
	return s;
}
Node *findMiddle(Node *head) {
    // Write your code here
// 	int ans=getLength(head);
// 	Node *temp=head;
// 	int len=ans/2;
	
// 	int count=0;
// 	while(count<len){
// 		temp=temp->next;
// 		count++;
// 	}
	
	return getNode(head);
	
}
int main(){
    Node *head = new Node(3);
    Node *head1 = new Node(5);
    Node *head2 = new Node(7);
    Node *head3 = new Node(9);
   
    // Node *head4 = new Node(15);
    head->next = head1;
    head1->next = head2;
    head2->next = head3;
  
    Node *n=findMiddle(head);
    cout<<n->data;
}