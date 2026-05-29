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
    string s;
    cin >> s;
    int n = s.size();
    int ans = 1;
    int cnt = 1;
    for (int i = 1; i < n;i++) {
        if(s[i] == s[i-1])
            cnt++;
        else
            cnt = 1;
        ans = max(ans, cnt);
    }
    cout << ans;
    return 0;
}