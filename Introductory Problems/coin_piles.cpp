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
    int t;
    cin >> t;
    while(t--) {
        int a, b;
        cin >> a >> b;
        if((a+b)%3 == 0 && abs(a-b) <= min(a,b))
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}