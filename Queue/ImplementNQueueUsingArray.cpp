#include<iostream>
using namespace std;

class NQueue{
public:
    
        int *arr, *next, *front, *rear;
        int  freespot;
    
    // Initialize your data structure.
    NQueue(int s, int n){
        // Write your code here.
        freespot = 0;
        arr = new int[n];
        next = new int[n];
        front = new int[s];
        rear = new int[s];
        for(int i=0;i<s;i++) {
            front[i] = -1;
            rear[i] = -1;
        }

        for(int i=0;i<n-1;i++) {
            next[i] = i+1;
        }
        next[n-1] = -1;
    }

    // Enqueues 'X' into the Mth queue. Returns true if it gets pushed into the queue, and false otherwise.
    bool enqueue(int x, int m){
        // Write your code here.
        if(freespot == -1) {
            return false;
        }

        int ind = freespot;
        freespot = next[ind];
        // cout<<"in"<<endl;
        if(front[m] == -1) {
            front[m] = ind;
        }else{
            next[rear[m]] = ind;
        }
// cout<<"in"<<endl;
        next[ind] = -1;
        rear[m] = ind;
// cout<<"in"<<endl;
        arr[ind] = x;
        return true;
    }

    // Dequeues top element from Mth queue. Returns -1 if the queue is empty, otherwise returns the popped element.
    int dequeue(int m){
        // Write your code here.
        if(front[m] == -1) {
            return -1;
        }   

        int ind = front[m];
        front[m] = next[ind];
        next[ind] = freespot;
        freespot = ind;
 
        return arr[ind];
    }
};
int main(){
    NQueue *n1=new NQueue(2,5);
    cout<<n1->enqueue(5, 0)<<endl;
    cout<<n1->enqueue(2, 0)<<endl;
    cout<<n1->enqueue(3,0)<<endl;
    cout<<n1->enqueue(3,1)<<endl;
    cout<<n1->dequeue(0)<<endl;
    cout<<n1->dequeue(1)<<endl;

}