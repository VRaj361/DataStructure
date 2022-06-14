#include<iostream>
#include<vector>
using namespace std;
//advance

bool isSafe(vector<vector<int>>& arr,int n,int x,int y,vector<vector<int>> visited){
    if( (x>=0&&x<n) && (y>=0&&y<n) && arr[x][y]==1 && visited[x][y]==0){
        return true;
    }else{
        return false;
    }
}


void solve(vector<vector<int>> arr,int n,vector<string>& ans,vector<vector<int>>& visited,int x,int y,string path){
    if(x==n-1&&y==n-1){
        ans.push_back(path);
        return;
    }
    visited[x][y]=1;
    
    //down
    int nx=x+1;
    int ny=y;
    if(isSafe(arr,n,nx,ny,visited)){
        path.push_back('D');
        solve(arr,n,ans,visited,nx,ny,path);
        path.pop_back();
    }   
    //left
    nx=x;
    ny=y-1;
    if(isSafe(arr,n,nx,ny,visited)){
        path.push_back('L');
        solve(arr,n,ans,visited,nx,ny,path);
        path.pop_back();
    }
    //right
    nx=x;
    ny=y+1;
    if(isSafe(arr,n,nx,ny,visited)){
        path.push_back('R');
        solve(arr,n,ans,visited,nx,ny,path);
        path.pop_back();
    }
    //up
    nx=x-1;
    ny=y;
    if(isSafe(arr,n,nx,ny,visited)){
        path.push_back('U');
        solve(arr,n,ans,visited,nx,ny,path);
        path.pop_back();
    }


    visited[x][y]=0;
}
vector<string> ratamaze(vector<vector<int>>& arr,int n){
    vector<string> ans;
    if(arr[0][0]==0||arr[n-1][n-1]==0){
        return ans;
    }
    int x=0;
    int y=0;
    vector<vector<int>> visited=arr;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            visited[i][j]=0;
        }
    }//all value initialized
    string path="";
    solve(arr,n,ans,visited,x,y,path);
    return ans;
    // sort()

}



int main(){
    //three array are required 
    //first input
    //second output
    //third for visited array

    vector<vector<int>> arr={{1,0,0,0},{1,1,0,1},{1,1,0,0},{0,1,1,1}};
    vector<string> ans=ratamaze(arr,arr.size());
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }

    


}