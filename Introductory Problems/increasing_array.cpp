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
    int a;
    cin >> a;
    ll ans = 0;
    for (int i = 1; i < n;i++) {
        int b;
        cin >> b;
        ans += max(0, a - b);
        a = max(a, b);
    }
    cout << ans;
    return 0;
}