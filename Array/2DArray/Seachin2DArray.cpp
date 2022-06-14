//74 ,240 leetcode search in 2d array
#include<iostream>
#include<vector>
using namespace std;
bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int r=0;
        int c=matrix[0].size()-1;
        while(r<matrix.size()&&c>=0){
            if(matrix[r][c]==target){
                return 1;
            }
            else if(matrix[r][c]>target){
                c--;
            }else{
                r++;
            }
        }   
        return 0;
    }
int main(){

    // [[1,4,7,11,15],[2,5,8,12,19],[3,6,9,16,22],[10,13,14,17,24],[18,21,23,26,30]]
    vector<vector<int>> arr{{1,4,7,11,15},{2,5,8,12,19},{3,6,9,16,22},{10,13,14,17,24},{18,21,23,26,30}};
    int target=20;
    //work in only row wise array and rowwise and column wise both works fine
    
    cout<<searchMatrix(arr,target);
}
