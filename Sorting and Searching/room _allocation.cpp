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
    vector<pair<int, int>> v(n);
    for (int i = 0; i < n;i++) {
        cin >> v[i].first >> v[i].second;
    }
    sort(v.begin(), v.end(), [](const pair<int, int> &a, const pair<int, int> &b)
         { return a.second < b.second; });
    int i = 1;
    int j = 1;
    int idx = 0;

    return 0;
}