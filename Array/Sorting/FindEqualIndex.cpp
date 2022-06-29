// { Driver Code Starts
#include<bits/stdc++.h>

using namespace std;


 // } Driver Code Ends
//User function template for C++
class Solution{
public:

	void valueEqualToIndex(int arr[], int n) {
	    // code here
	    

	    for(int i=0;i<n;i++){
	        if(arr[i]==i){
	            
                cout<<i;
	            return ;
	        }
	    }
	    cout<<-1;
	    
	}
};

// { Driver Code Starts.

int main() {

        int n, i;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        ob.valueEqualToIndex(arr, n);
        
    return 0;
}
  // } Driver Code Ends