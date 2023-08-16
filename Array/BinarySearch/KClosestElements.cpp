#include<iostream>
#include<vector>

using namespace std;

// method 1
//Complexity - O(n-k) 
vector<int> closestElements(vector<int> arr, int k, int x) {
    int l = 0;
    int h = arr.size()-1;

    while(h-l>=k) {
        if(x-arr[l] > arr[h] - x) {
            l++;
        }else{
            h--;
        }
    }
    //use for loop to iterate elements from l index to h index

    return vector<int>(arr.begin() + l,arr.begin() + h + 1);
}

//method 2
//Complexity - (log(n) + k) 
int lowerBound(vector<int> arr, int x) {
    int s = 0;
    int e = arr.size() - 1;
    int ans = e;//for x is greater than Array's last index
    while(s <= e) {
        int m = s + (e-s)/2;
        if(arr[m] >= x) {
            ans = m;
            e = m - 1;
        }else {
            s = m + 1;
        }
    }
    return ans;
}
vector<int> closestUsingBS(vector<int> arr, int k, int x) {
    int h = lowerBound(arr, x);
    int l = h - 1;
    while(k--) {
        if(h >= arr.size()) {
            l--;
        }else if(l < 0) {
            h++;
        }else if(x-arr[l] > arr[h] - x) {
            h++;
        }else{
            l--;
        }
    }
    return vector<int>(arr.begin() + l + 1,arr.begin() + h);
}

vector<int> findClosestElements(vector<int> arr, int k, int x) {
    //method 1
    //return closestElements(arr, k, x);

    //method 2
    return closestUsingBS(arr, k ,x);
}

void printVector(vector<int> arr) {
    for(auto n : arr) {
        cout<<n<<" ";
    }
    cout<<"\n";
}

int main() {
    //leetcode problem - 658
    //https://leetcode.com/problems/find-k-closest-elements/

    vector<int> arr = {1,2,3,4,5};
    int k = 4;
    int x = 3;
    
    printVector(findClosestElements(arr, k, x));
}