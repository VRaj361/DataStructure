
#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
    int dx[4] = {1,0,-1,0};
    int dy[4] = {0,-1,0,1};
    char dir[4] = {'D','L','U','R'};
    
    
    void combination(vector<vector<int>> &m, int i, int j, int row, int col, vector<string> &ans, string s) {
        if(i == row-1 && j== col-1) {
            ans.push_back(s);
            return;
        }
        if(m[i][j] == 0) 
            return;
            
        m[i][j] = 0;
        
        for(int k=0; k<4; k++) {
            int newX = i + dx[k];
            int newY = j + dy[k];
            char p = dir[k];
            if((newX >= 0 && newX < row) && (newY >= 0 && newY < col) && m[newX][newY] == 1) {
                combination(m, newX, newY, row, col, ans, s+p);
            }
        }
        m[i][j] = 1;
    }
    
    vector<string> findPath(vector<vector<int>> &m, int n) {
        vector<string> path;
        
        if(m[0][0] == 0) {
            return path;
        }
        combination(m, 0,0, n, n, path,"");
        return path;
    }
};


int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> m(n, vector<int> (n,0));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> m[i][j];
            }
        }
        Solution obj;
        vector<string> result = obj.findPath(m, n);
        sort(result.begin(), result.end());
        if (result.size() == 0)
            cout << -1;
        else
            for (int i = 0; i < result.size(); i++) cout << result[i] << " ";
        cout << endl;
    }
    return 0;
}