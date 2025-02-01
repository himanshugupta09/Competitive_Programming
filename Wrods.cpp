//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
    public:
        int rows, cols;
        vector<vector<bool>> vis;
        
        bool search(int x, int y, string &word, int idx, vector<vector<char>>& board){
            
            if(x < 0 || x >= rows || y < 0 || y >= cols || idx >= word.size())
                return false;
            
            if(vis[x][y])
                return false;
            
            if(word[idx] != board[x][y])
                return false;
            
            if(idx == word.size()-1 && word[idx] == board[x][y])
                return true;
            
            vis[x][y] = true;
            
            vector<int> xdir = {1, 0, -1, 0};
            vector<int> ydir = {0, 1, 0, -1};
            
            int ans = false;
            
            for(int i=0; i<4; i++)
                ans = ans || search(x+xdir[i], y+ydir[i], word, idx+1, board);
            
            vis[x][y] = false;
            
            return ans;
        }
    
        bool isWordExist(vector<vector<char>>& board, string word) {
            // Code here
            rows = board.size();
            cols = board[0].size();
            vis.resize(rows, vector<bool>(cols));
            
            bool ans = false;
            
            for(int i=0; i<rows; i++){
                for(int j=0; j<cols; j++){
                    ans = ans || search(i, j, word, 0, board);
                }
            }
            
            return ans;
        }

};


//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, m;
        cin >> n >> m;
        vector<vector<char>> mat(n, vector<char>(m, '*'));
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                cin >> mat[i][j];
        string word;
        cin >> word;
        Solution obj;
        bool ans = obj.isWordExist(mat, word);
        if (ans)
            cout << "true\n";
        else
            cout << "false\n";

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends
