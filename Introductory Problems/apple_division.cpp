#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using pii = pair<int,int>;

#define fastio ios::sync_with_stdio(false); cin.tie(nullptr)

const ll INFLL = 1e18;
const int INF = 1e9;
const int MOD = 1e9 + 7;

ll solve(int i, vector<ll>& p, ll sum1, ll sum2, int n) {
    if(i == n)
        return abs(sum1 - sum2);
    return min(solve(i + 1, p, sum1 + p[i], sum2, n), solve(i + 1, p, sum1, sum2 + p[i], n));
}

int main() {
    fastio;
    int n;
    cin >> n;
    vector<ll> p(n);
    for(ll& i:p)
        cin >> i;
    cout << solve(0, p, 0, 0, n);
    return 0;
}