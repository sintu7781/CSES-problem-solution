#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    map<int, int> m;
    for (int i = 0; i < n;i++) {
        int a, b;
        cin >> a >> b;
        m[a]++;
        m[b + 1]--;
    }
    int prev = 0;
    int ans = 1;
    for(auto& i:m) {
        i.second += prev;
        prev = i.second;
        ans = max(ans, i.second);
    }
    cout << ans;
    return 0;
}