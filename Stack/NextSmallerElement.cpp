#include<iostream>
#include<stack>
#include<vector>
using namespace std;

vector<int> nextSmallerElement(vector<int> &arr, int n)
{
    //next smaller element 
	stack<int> s;
	s.push(-1);
	vector<int> ans(n);
	
	for(int i=n-1;i>=0;i--){//next previous element then for loop is go to 0 to n
		int ele=arr[i];
		while(s.top()>=ele){
			s.pop();
		}
		ans[i]=s.top();
		s.push(ele);
	}
	return ans;
}
int main(){
    vector<int> v;
    v.push_back(2);
    v.push_back(1);
    v.push_back(4);
    v.push_back(3);
    vector<int> v1 = nextSmallerElement(v,4);
    for(int i=0;i<v1.size();i++){
        cout<<v1[i]<<" ";
    }

}