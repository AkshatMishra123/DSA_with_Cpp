 #include<iostream>
#include<vector>
using namespace std;

void helper(vector<vector<int>> &mat, int r, int c, string path, vector<string> &ans,
             vector<vector<bool>> &vis){
// similar n*n mat "vis" to track the path via bool value
    int n = mat.size();
    // base cases
    if (r < 0 || c < 0 || r >= n || c >= n || mat[r][c] == 0 || vis[r][c]) {
        return;
    }

    if (r == n-1 && c == n-1){ 
        ans.push_back(path);
        return;
    }

    vis [r][c] = true;
    
    helper(mat, r+1, c, path+"D", ans, vis); //down
    helper(mat, r-1, c, path+"U", ans, vis); //up
    helper(mat, r, c-1, path+"L", ans, vis); //left
    helper(mat, r, c+1, path+"R", ans, vis); //right

    vis [r][c] = false; // back track step after finding one path so that other path can also access the cell which has been visited previously visited and change the bool value

}

//compleate the function
vector<string> findPath(vector<vector<int>> &mat) {
    int n = mat.size();

    vector<string> ans;
    string path = "";
    vector<vector<bool>> vis(n, vector<bool>(n, false));

    helper(mat, 0, 0, path, ans, vis);

    return ans;
}

int main() {
    vector<vector<int>> mat = {
        {1, 0, 0, 0},
        {1, 1, 0, 1},
        {1, 1, 0, 0},
        {0, 1, 1, 1}
    };

    vector<string> paths = findPath(mat);

    if (paths.empty()) {
        cout << "No path found" << endl;
    } else {
        cout << "Possible paths:" << endl;
        for (const string &path : paths) {
            cout << path << endl;
        }
    }

    return 0;
}
