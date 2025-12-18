#include<bits/stdc++.h>
using namespace std;

const int mod = 1000000007;

int main() {
    int n;
    cin >> n;
    unordered_map<int, int> m;
    for (int i = 0; i < n;i++) {
        int x;
        cin >> x;
        m[x]++;
    }
    long long ans = 1;
    for(auto& i:m) {
        ans = (ans * (i.second + 1)) % mod;
    }
    cout << ans - 1;
    return 0;
}