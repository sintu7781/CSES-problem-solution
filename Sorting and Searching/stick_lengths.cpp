#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    long long p[n];
    for (int i = 0; i < n;i++) {
        cin >> p[i];
    }
    sort(p, p + n);
    int x;
    if(n&1) {
        x = p[n / 2];
    } else {
        x = p[(n / 2 + (n + 1) / 2) / 2];
    }
    long long ans = 0;
    for (int i = 0; i < n;i++) {
        ans += abs(x - p[i]);
    }
        cout << ans;
    return 0;
}