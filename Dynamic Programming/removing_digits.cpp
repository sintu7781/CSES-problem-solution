#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using pii = pair<int,int>;

#define fastio ios::sync_with_stdio(false); cin.tie(nullptr)

const ll INFLL = 1e18;
const int INF = 1e9;
const int MOD = 1e9 + 7;

int main() {
    fastio;
    int n;
    cin >> n;
    vector<int> dp(n + 1, 1);
    for (int i = 10; i <= n;i++) {
        int mx = 0;
        int digit = i;
        while(digit) {
            mx = max(mx, digit % 10);
            digit /= 10;
        }
        dp[i] += dp[i - mx];
    }
    cout << dp[n];
    return 0;
}