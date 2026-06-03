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
    int sum = (n * (n + 1)) / 2;
    if(sum%2)
        cout << 0;
    else {
        int target = sum / 2;
        vector<ll> dp(target+1, 0);
        dp[0] = 1;
        for (int i = 1; i < n;i++) {
            for (int j = target; j >= i;j--) {
                dp[j] += dp[j - i];
                dp[j] %= MOD;
            }
        }
        cout << dp[target];
    }
    return 0;
}