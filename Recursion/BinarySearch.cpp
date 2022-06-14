#include<iostream>
using namespace std;
int index(int *arr,int s,int e,int val){
	//start index is bigger than ending index
	if(s>e){
		return -1;
	}
	int mid=s+(e-s)/2;
	//element found
	if(arr[mid]==val){
		return mid;
	}
	if(arr[mid]<val){
		return index(arr,mid+1,e,val);
	}else{
		return index(arr,s,mid-1,val);
	}
	
}

int main(){
    int arr[]={3,78,231,533,666};
    cout<<index(arr,0,4,231);
}