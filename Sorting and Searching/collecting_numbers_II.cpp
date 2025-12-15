#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> v(n+1, -1);
    vector<int> t(n+1);
    int ans = 1;
    for (int i = i; i <= n;i++) {
        cin >> t[i];
        if(v[t[i]+1] != -1)
            ans++;
        v[t[i]] = t[i];
    }
    cout << ans << endl;
    while(m--) {
        int a, b;
        cin >> a >> b;
        if(t[a] < t[b])
            ans++;
        else
            ans--;
        swap(t[a], t[b]);
        cout << ans << endl;
    }
        return 0;
}