#include<iostream>
using namespace std;
int pivot(int arr[],int n){
    int s=0,e=n-1;
    int mid=s+(e-s)/2;
    while(s<e){
        if(arr[mid]>=arr[0]){
            s=mid+1;
        }else{
            e=mid;
        }
        mid=s+(e-s)/2;
    }
    return s;
}


int search(int arr[], int n, int key) {
    // Write your code here.
    int ind=pivot(arr,n);
    if(arr[ind]<=key&&key<=arr[n-1]){
        //binary search
        int s=ind;
        int e=n-1;
        while(s<=e){
            int mid=s+(e-s)/2;
            
            if(arr[mid]==key){
                return mid;
            }else if(arr[mid]>key){
                e=mid-1;
            }else{
                s=mid+1;
            }
        }
        return -1;
    }else{
        //binarysearch 
		int s=0;
        int e=ind-1;
        while(s<=e){
            int mid=s+(e-s)/2;
            
            if(arr[mid]==key){
                return mid;
            }else if(arr[mid]>key){
                e=mid-1;
            }else{
                s=mid+1;
            }
        }//end of while loop
        return -1;
    }//end of else
}
int main(){
    int arr[]={2,5,-3,0};
    int n=4;
    int key=1;
    cout<<"Index is "<<search(arr,n,key)<<endl;
    
}