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
    int n, x;
    cin >> n >> x;
    vector<int> h(n), s(n);
    for (int i = 0; i < n;i++)
        cin >> h[i];
    for (int i = 0; i < n;i++)
        cin >> s[i];
    vector<int> dp(x+1, 0);
    for (int i = 0; i < n;i++) {
        for (int j = x; j >= h[i];j--) {
            dp[j] = max(dp[j], dp[j - h[i]] + s[i]);
        }
    }
    cout << dp[x];
    return 0;
}