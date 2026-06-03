#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using pii = pair<int,int>;

#define fastio ios::sync_with_stdio(false); cin.tie(nullptr)

const ll INFLL = 1e18;
const int INF = 1e9;
const int MOD = 1e9 + 7;

void solve(int n, int a, int b, int c) {
    if(n == 1) {
        cout << a << " " << b << "\n";
        return;
    }
    solve(n - 1, a, c, b);
    cout << a << " " << b << "\n";
    solve(n - 1, c, b, a);
}

int main() {
    fastio;
    int n;
    cin >> n;
    cout << pow(2, n) - 1 << "\n";
    solve(n, 1, 3, 2);
    return 0;
}