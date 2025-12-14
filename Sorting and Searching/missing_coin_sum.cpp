#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int x[n];
    for (int i = 0; i < n;i++) {
        cin >> x[i];
    }
    sort(x, x + n);
    long long ans = 0;
    for (int i = 0; i < n;i++) {
        if(x[i] > ans+1)
            break;
        ans += x[i];
    }
    cout << ans + 1;
    return 0;
}