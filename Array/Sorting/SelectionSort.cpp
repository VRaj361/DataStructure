#include<iostream>
#include<vector>
using namespace std;
void selectionSort(vector<int>& arr, int n)
{   
    // Write your code here.
    for(int i=0;i<arr.size()-1;i++){
        int minVal=i;
        for(int j=i+1;j<arr.size();j++){
            if(arr[minVal]>arr[j]){
                minVal=j;
            }
        
        }
      	swap(arr[minVal],arr[i]);
        //convinent in small size array 
        // time complexity => best and worst case O(N^2)       
    }
}

int main(){
    vector<int> arr={4,3,2,1};
    selectionSort(arr,4);
    for(auto i:arr){
        cout<<i<<" ";
    }
    return 0;
}