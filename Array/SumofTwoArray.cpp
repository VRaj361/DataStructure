//code studio 44  array
#include<iostream>
#include<vector>
using namespace std;
vector<int> findArraySum(vector<int>&a, int n, vector<int>&b, int m) {
	// Write your code here.
    vector<int> arr;
    int i=n-1;
    int j=m-1;
    int carry=0;
    //case 1 look for two numbers
    while(i>=0&&j>=0){
		int sum=a[i]+b[j]+carry;
        carry=sum/10;
        sum=sum%10;
        arr.push_back(sum);
        i--;
        j--;
    }
    //case 2 look for first array only
    while(i>=0){
        int sum=a[i]+carry;
        carry=sum/10;
        sum=sum%10;
        arr.push_back(sum);
        i--;
    }
    //case 3 look for second array only
    while(j>=0){
        int sum=b[j]+carry;
        carry=sum/10;
        sum=sum%10;
        arr.push_back(sum);
        j--;
    }
    //case 4 look for carry at the last
    while(carry!=0){
        int sum=carry;
        carry=sum/10;
        sum=sum%10;
        arr.push_back(sum);
    }
	//reverse the array
    
    for(int i=0;i<arr.size()/2;i++){
        swap(arr[i],arr[arr.size()-1-i]);
    }
    
    return arr;
    
}
int main(){
    vector<int> arr1={4,5,1};
    vector<int> arr2={3,4,5};
    int a=3,b=3;
    vector<int> arr=findArraySum(arr1,a,arr2,b);
    for(auto x:arr){
        cout<<x<<" ";
    }
}
