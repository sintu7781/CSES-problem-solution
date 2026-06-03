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
    for (int i = 1; i <= n;i++) {
        ll total = i * i;
        ll placed = ((total * (total - 1)) / 2) - (4 * (i - 1) * (i - 2));
        cout << placed << "\n";
    }

        return 0;
}