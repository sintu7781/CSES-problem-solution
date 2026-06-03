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
    vector<int> v(n, 1);
    for (int i = 0; i < n;i++) {
        for (int j = 0; j < n;j++) {
            char ch;
            cin >> ch;
            if(i == 0) {
                if(ch == '*' || (j-1 >= 0 && v[j-1] == 0))
                    v[j] = 0;
                continue;
            }
            if(ch == '*')
                v[j] = 0;
            else {
                if(j-1 >= 0)
                    v[j] = (v[j] + v[j - 1]) % MOD;
            }
        }
    }
    cout << v[n - 1];
    return 0;
}