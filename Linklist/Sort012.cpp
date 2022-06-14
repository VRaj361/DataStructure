#include <iostream>
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
Node *sortList(Node *head)
{
    // Write your code here.
    int cz = 0, co = 0, ct = 0;
    Node *temp = head;
    while (temp != NULL)
    {
        if (temp->data == 0)
        {
            cz++;
        }
        else if (temp->data == 1)
        {
            co++;
        }
        else
        {
            ct++;
        }
        temp = temp->next;
    }
    temp = head;
    while (temp != NULL)
    {
        if (cz != 0)
        {
            temp->data = 0;
            cz--;
        }
        else if (co != 0)
        {
            temp->data = 1;
            co--;
        }
        else if(ct!=0)
        {
            temp->data = 2;
            ct--;
        }
        temp = temp->next;
    }
    return head;
}
void insertTail(Node *&tail,Node *curr){
	tail->next=curr;
	tail=curr;
}
Node* sortList1(Node *head)
{
    // Write your code here.
	Node *zHead=new Node(-1);
	Node *zTail=zHead;
	Node *oHead=new Node(-1);
	Node *oTail=oHead;
	Node *tHead=new Node(-1);
	Node *tTail=tHead;
	
	Node *temp=head;
	while(temp!=NULL){
		if(temp->data==0){
			insertTail(zTail,temp);
		}else if (temp->data==1){
			insertTail(oTail,temp);
		}else if(temp->data==2){
			insertTail(tTail,temp);
		}
		temp=temp->next;
	}
	//merging 3 lists
	if(oHead->next!=NULL){
		zTail->next=oHead->next;
	}
	else{
		zTail->next=tHead->next;
	}
	
	oTail->next=tHead->next;
	tTail->next=NULL;
	
	//merge done 
	
	head=zHead->next;
	//delete useless nodes
	delete zHead;
	delete oHead;
	delete tHead;
	
	return head;
}
void insert(Node *&tail,Node *temp){
    tail->next=temp;
    tail=tail->next;
}
Node *sort012(Node *head){
    //creating three linklist
    Node *zh=new Node(-1);
    Node *zt=zh;
    
    Node *oh=new Node(-1);
    Node *ot=oh;

    Node *th=new Node(-1);
    Node *tt=th;

    Node *temp=head;
    while(temp!=NULL){
        if(temp->data==0){
            insert(zt,temp);
        }else if (temp->data==1){
            insert(ot,temp);
        }else{
            insert(tt,temp);
        }
        temp=temp->next;
    }
    //merging
    //check for middle linklist
    if(oh!=NULL){
        zt->next=oh->next;
    }else{
        zt->next=th->next;
    }
    ot->next=th->next;
    tt->next=NULL;

    head=zh->next;//head initialization
    delete zh;
    delete oh;
    delete th;
    return head;

}



void print(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
int main()
{
    Node *head = new Node(1);
    Node *head1 = new Node(0);
    Node *head2 = new Node(2);
    Node *head3 = new Node(1);
    Node *head4 = new Node(2);
    Node *head5 = new Node(0);
    head->next = head1;
    head1->next = head2;
    head2->next = head3;
    head3->next = head4;
    head4->next = head5;
    // head=sortList(head);
    head=sort012(head);
    print(head);
}