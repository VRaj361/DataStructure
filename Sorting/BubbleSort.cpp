#include<iostream>
#include<vector>
using namespace std;
void bubbleSort(vector<int>& arr, int n)
{   
    for(int i=1;i<arr.size();i++){
//         for(int j=0;j<arr.size()-1;j++){
        bool is_check;
        
		for(int j=0;j<arr.size()-i;j++){
            if(arr[j]>arr[j+1]){
//                 int temp=arr[j];
//                 arr[j]=arr[j+1];
//                 arr[j+1]=temp;
        		swap(arr[j],arr[j+1]);
                is_check=true;
            }
        }
        if(is_check==false)
            break;
    }
}

int main(){
    vector<int> arr={4,3,2,1};
    //if already stable then time complexity is O(n) because of bool condition
    //if swap is not done then it return false so time complexity will reduce
    bubbleSort(arr,4);
    for(auto i:arr){
        cout<<i<<" ";
    }
    return 0;
}