#include<iostream>
#include<vector>
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
bool solve(vector<int> &arr){
    int s=0;
    int e=arr.size()-1;
    while(s<=e){
        if(arr[s++]!=arr[e--]){
            return 0;
        }
    }
    return 1;
}
bool isPalindrome(Node *head){
    if(head==NULL){
        return 0;
    }
    //approach 1 
    //take extra space complexity 
    //store the all element in array and after apply the logic of palindrome in array
    Node *temp=head;
    vector<int> arr;
    while(temp!=NULL){
        arr.push_back(temp->data);
        temp=temp->next;
    }
    return solve(arr);
    
}

bool isPalindrome1(Node *head){
    if(head==NULL){
        return 0;
    }
    //it takes same time complexity of above but the space complexity is reduced and O(1)
    Node *first=head->next;
    Node *last=head;
    while(first!=NULL&&first->next!=NULL){
        first=first->next;
        if(first->next!=NULL){
            first=first->next;
        }
        last=last->next;
    }
    // cout<<last->data<<endl;
    //reverse logic apply
    Node *temp=last->next;

    Node *prev=NULL;
    Node *next=NULL;
    while(temp!=NULL){
        next=temp->next;
        temp->next=prev;
        prev=temp;
        temp=next;
    }
    last->next=prev;

    //check two pointers
    first=head;
    last=last->next;
    while(last!=NULL){
        if(last->data!=first->data){    
            return 0;
        }else{
            last=last->next;
            first=first->next;
        }
    }

    return 1;

}

void print(Node *&head){
    Node *temp = head;
    if (temp == NULL)
    {
        cout << "list is empty" << endl;
    }
    else
    {
        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
}
int main(){
    Node *head=new Node(1);
    Node *head1=new Node(2);
    Node *head2=new Node(3);
    Node *head3=new Node(3);
    Node *head4=new Node(2);
    Node *head5=new Node(1);
    head->next=head1;
    head1->next=head2;
    head2->next=head3;
    head3->next=head4;
    head4->next=head5;
    // print(head);
    cout<<isPalindrome1(head)<<endl;
}