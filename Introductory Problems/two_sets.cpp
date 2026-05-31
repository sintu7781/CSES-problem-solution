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
    if(((n+1) / 2)&1) {
        cout << "NO";
        return 0;
    }
    cout << "YES\n";
    if(n&1) {
        cout << n / 2 << "\n";
        cout << (n + 1) / 2 + (n+1) / 4 << " ";
        for (int i = 1; i < (n + 1) / 4;i++) {
            cout << i << " " << n + 1 - i << " ";
        }
        cout << "\n"
             << (n + 1) / 2 << "\n";
        cout << (n + 1) / 2 << " " << (n + 1) / 4 << " ";
        for (int i = (n + 1) / 4+1; i < (n + 1) / 2;i++) {
            cout << i << " " << n + 1 - i << " ";
        }
    } else {
        cout << n / 2 << "\n";
        for (int i = 1; i <= n / 4;i++) {
            cout << i << " " << n + 1 - i << " ";
        }
        cout << "\n"
             << n / 2 << "\n";
        for (int i = n / 4 + 1; i <= n / 2;i++) {
            cout << i << " " << n + 1 - i << " ";
        }
        cout << "\n";
    }

    return 0;
}