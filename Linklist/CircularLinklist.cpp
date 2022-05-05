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
    ~Node()
    {
        int val = this->data;
        if (this->next != NULL)
        {
            delete next;
            this->next = NULL;
        }
        cout << "Deleted Node value is " << val << endl;
    }
};

void insertNode(Node *&tail, int element, int d)
{

    // empty list
    if (tail == NULL)
    {
        Node *newNode = new Node(d);
        tail = newNode;
        newNode->next = newNode;
    }
    else
    {
        // non-empty list
        // assuming that the element is present in the list

        Node *curr = tail;

        while (curr->data != element)
        {
            curr = curr->next;
        }

        // element found -> curr is representing element wala node
        Node *temp = new Node(d);
        temp->next = curr->next;
        curr->next = temp;
    }
}
void deleteNode(Node *&tail,int val){
    if(tail==NULL){
        cout<<"List is empty"<<endl;
        return;
    }
    else{
        Node *pre=tail;
        Node *curr=pre->next;
        while(curr->data!=val){
            pre=curr;
            curr=curr->next;
        }
        pre->next=curr->next;
        if(curr==pre){
            tail=NULL;
        }
        else if (tail==curr){
            tail=pre;
        }
        curr->next=NULL;
        delete curr;

    }
}
void print(Node *tail)
{

    Node *temp = tail;

    // empty list
    if (tail == NULL)
    {
        cout << "List is Empty " << endl;
        return;
    }

    do
    {
        cout << tail->data << " ";
        tail = tail->next;
    } while (tail != temp);

    cout << endl;
}

int main()
{
    Node *tail = NULL;
    insertNode(tail, 3, 3);
    print(tail);
    insertNode(tail, 3, 1);
    print(tail);
    insertNode(tail, 1, 5);
    print(tail);
    insertNode(tail, 1, 6);
    print(tail);
    deleteNode(tail,3);
    print(tail);
}