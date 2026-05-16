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
    long long sum1 = (1LL * n * (n + 1)) / 2;
    long long sum2 = 0;
    for (int i = 0; i < n-1;i++) {
        int a;
        cin >> a;
        sum2 += a;
    }
    cout << sum1 - sum2;
    return 0;
}