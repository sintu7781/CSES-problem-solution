#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using pii = pair<int,int>;

#define fastio ios::sync_with_stdio(false); cin.tie(nullptr)

const ll INFLL = 1e18;
const int INF = 1e9;
const int MOD = 1e9 + 7;

// int solve(int i, int n, int x, vector<int>& c, vector<vector<int>>& dp) {
//     if(i == 0) {
//         if(x%c[i] == 0)
//             return x / c[i];
//         else
//             return INF;
//     }
//     if(dp[i][x] != -1)
//         return dp[i][x];
//     int skip = solve(i - 1, n, x, c, dp);
//     int take = INT_MAX;
//     if(x >= c[i]) {
//         take = 1 + solve(i, n, x - c[i], c, dp);
//     }
//     return dp[i][x] = min(skip, take);
// }

int main() {
    fastio;
    int n, x;
    cin >> n >> x;
    vector<int> c(n);
    vector<int> dp(x + 1, INF);
    for(int& i:c) {
        cin >> i;
    }
    for (int i = 0; i <= x;i++) {
        if(i%c[0] == 0)
            dp[i] = i / c[0];
    }
    for (int i = 1; i < n; i++) {
        for (int j = c[i]; j <= x;j++) {
            int skip = dp[j];
            int take = 1 + dp[j-c[i]];
            dp[j] = min(skip, take);
        }
    }
    cout << (dp[x] >= INF ? -1 : dp[x]);
    return 0;
}