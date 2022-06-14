//codestudio 2d array 28
#include<iostream>
#include<vector>
using namespace std;
vector<int> wavePrint(vector<vector<int>> arr, int nRows, int mCols)
{
    //Write your code here
    vector<int> ans;
    for(int i=0;i<mCols;i++){
		//col odd
        if(i%2==1){
        	for(int j=nRows-1;j>=0;j--){
//                 cout<<arr[j][i]<<" ";
                ans.push_back(arr[j][i]);
            }    
        }else{
            for(int j=0;j<nRows;j++){
//                 cout<<arr[j][i]<<" ";
                ans.push_back(arr[j][i]);
            }
        }
        
    }
    return ans;
}
int main(){
    vector<vector<int>> arr{{1,2,3},{4,5,6},{7,8,9}};
    vector<int>ans=wavePrint(arr,3,3);
    for(auto x:alignas){
        cout<<x<<" ";
    }


}