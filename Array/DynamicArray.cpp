#include <iostream>
using namespace std;

//array creation which is based on length and size of the array
struct Array
{
    //int *A;
    int A[10];
    int size;
    int len;
};


void display(struct Array arr){
    int i;
    cout<<"print the element"<<endl;
    for (int i = 0; i < arr.len; i++)
    {
        cout<<arr.A[i]<<" ";
    }
    
}
void append(struct Array *arr,int n){
    if(arr->len<arr->size){
        arr->A[arr->len++]=n;
    }
}//add the element at the last

void insert(struct Array *arr,int ind,int n){
    if(ind>=0&&ind<=arr->len){
        for(int i=arr->len;i>ind;i--){
            arr->A[i]=arr->A[i-1];
        }
        arr->A[ind]=n;
        arr->len++;
    }
}//add the element any index

void delet(struct Array *arr,int ind){
    if(ind>=0&&ind<=arr->len){
        for(int i=ind;i<arr->len-1;i++){
            arr->A[i]=arr->A[i+1];
        }
    }
    arr->len--;
    cout<<arr->len<<" "<<arr->size<<endl;
}//delete is keyword so we can not use delete 


int main(void)
{
    struct Array arr={{2,3,4,5,6},10,5};
    // cout<<"Enter the element size"<<endl;
    // cin>>arr.size;
    // int n,i;
    // //arr.A=(int *)malloc(sizeof(int)*arr.size);

    // arr.A=new int[arr.size];
    // arr.len=0;

    // cout<<"Enter the number"<<endl;
    // cin>>n;

    // for(i=0;i<n;i++){
    //     cin>>arr.A[i];
    // }
    // arr.len=n;

    append(&arr,7);
    insert(&arr,3,11);
    delet(&arr,3);
    display(arr);
    return 0;
}
