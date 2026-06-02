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
    if(n < 7) {
        cout << pow(2, n - 1);
        return 0;
    }
    vector<int> prev(6, 0);
    prev[0] = 1;
    prev[1] = 1;
    prev[2] = 2;
    prev[3] = 4;
    prev[4] = 8;
    prev[5] = 16;
    for (int i = 6; i <= n;i++) {
        int curr = 0;
        for (int j = 0; j < 6;j++) {
            curr = (curr + prev[j]) % MOD;
            if(j+1 < 6) prev[j] = prev[j + 1];
            else
                prev[j] = curr;
        }
    }
    cout << prev[5];
    return 0;
}