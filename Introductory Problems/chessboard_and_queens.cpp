#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using pii = pair<int,int>;

#define fastio ios::sync_with_stdio(false); cin.tie(nullptr)

const ll INFLL = 1e18;
const int INF = 1e9;
const int MOD = 1e9 + 7;

bool isSafe(int i, int col, unordered_map<int, bool>& row, unordered_map<int, bool>& up, unordered_map<int, bool>& down, vector<vector<bool>>& reserve) {
    if(row[i] || up[7+col-i] || down[i+col] || reserve[i][col])
        return false;
    return true;
}

void solve(int col, unordered_map<int, bool>& row, unordered_map<int, bool>& up, unordered_map<int, bool>& down, vector<vector<bool>>& reserve, int& ans) {
    if(col == 8) {
        ans++;
        return;
    }
    for (int i = 0; i < 8;i++) {
        if(isSafe(i, col, row, up, down, reserve)) {
            row[i] = true;
            down[i + col] = true;
            up[7 + col - i] = true;
            solve(col + 1, row, up, down, reserve, ans);
            row[i] = false;
            down[i + col] = false;
            up[7 + col - i] = false;
        }
    }
}

int main() {
    fastio;
    vector<vector<bool>> reserve(8, vector<bool>(8, false));
    for (int i = 0; i < 8;i++) {
        for (int j = 0; j < 8;j++) {
            char ch;
            cin >> ch;
            if(ch == '*')
                reserve[i][j] = true;
        }
    }
    int ans = 0;
    unordered_map<int, bool> row, up, down;
    solve(0, row, up, down, reserve, ans);
    cout << ans;
    return 0;
}