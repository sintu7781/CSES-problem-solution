#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    long long x;
    cin >> x;
    long long ans = x;
    long long prev = x;
    for (int i = 1; i < n;i++) {
        cin >> x;
        prev = max(x, x + prev);
        ans = max(ans, prev);
    }
    cout << ans;
    return 0;
}