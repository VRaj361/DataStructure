#include<iostream>
#include<vector>
#include<numeric>
using namespace std;
//leetcode 1011
//similar problem leetcode 410
bool isPossible(vector<int> arr, int days, int mid) {
    int weightsSum = 0;
    int count = 1;
    for(int i = 0; i<arr.size(); i++) {
        if(arr[i] > mid){
            return false;
        } 
        else if(weightsSum + arr[i] > mid) {
            count++;
            if(count > days) {
                return false;
            }
            weightsSum = arr[i];
        } else{
            weightsSum += arr[i];
        }
    }
    return true;
}

int shipWithinDays(vector<int> weights, int days) {
    int s = 0;
    int e = accumulate(weights.begin(),weights.end(),0);
    int ans = -1;
    if(weights.size() < days) {
        return ans;
    }
    while(s<=e) {
        int m = s+(e-s)/2;
        if(isPossible(weights, days, m)) {
            ans = m;
            e = m - 1;
        } else {
            s = m + 1;
        }
    }
    return ans;
}

int main() {
    vector<int> arr = {1,2,3,4,5,6,7,8,9,10};
    int days = 5;
    cout<<shipWithinDays(arr,days);
    return 0;
}