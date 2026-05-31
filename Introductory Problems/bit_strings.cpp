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
    ll ans = 1;
    for (int i = 0; i < n;i++) {
        ans = (ans * 2) % MOD;
    }
    cout << ans;
    return 0;
}