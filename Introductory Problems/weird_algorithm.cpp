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
    long long n;
    cin >> n;
    cout << n << " ";
    while(n != 1) {
        if(n&1) {
            n = n * 3 + 1;
        } else
            n /= 2;
        cout << n << " ";
    }
    return 0;
}