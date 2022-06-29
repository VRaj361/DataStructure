// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
int first(int arr[], int n, int x)
{
    int low = 0, high = n - 1, res = -1;
    while (low <= high)
    {
         
        // Normal Binary Search Logic
        int mid = (low + high) / 2;
         
        if (arr[mid] > x)
            high = mid - 1;
        else if (arr[mid] < x)
            low = mid + 1;
 
        // If arr[mid] is same as x, we
        // update res and move to the left
        // half.
        else
        {
            res = mid;
            high = mid - 1;
        }
    }
   
    return res;
}
 
/* If x is present in arr[] then returns
the index of LAST occurrence of x in
arr[0..n-1], otherwise returns -1 */
int last(int arr[], int n, int x)
{
    int low = 0, high = n - 1, res = -1;
    while (low <= high)
    {
         
        // Normal Binary Search Logic
        int mid = (low + high) / 2;
         
        if (arr[mid] > x)
            high = mid - 1;
        else if (arr[mid] < x)
            low = mid + 1;
 
        // If arr[mid] is same as x, we
        // update res and move to the right
        // half.
        else
        {
            res = mid;
            low = mid + 1;
        }
    }
    
    return res;
}
vector<int> find(int arr[], int n , int x )
{
    // code here
    
    // vector<int> ans={-1,-1};
    int a=first(arr,n,x);
    int b=last(arr,n,x);
    // cout<<a<<" "<<b;
    vector<int> ans{a,b};
    // ans[0]=a;
    // ans[1]=b;
    return ans;
    
    
    
}

// { Driver Code Starts.

int main()
{
    
        int n,x;
        cin>>n>>x;
        int arr[n],i;
        for(i=0;i<n;i++)
        cin>>arr[i];
        vector<int> ans;
        ans=find(arr,n,x);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    
    return 0;
}


  // } Driver Code Ends