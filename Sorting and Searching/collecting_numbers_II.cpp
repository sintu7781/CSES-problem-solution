#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> v(n+2, -1);
    vector<int> t(n+2);
    v[0] = 0;
    v[n + 1] = n + 1;
    int ans = 0;
    for (int i = 1; i <= n;i++) {
        cin >> t[i];
        if(v[t[i]+1] != -1) 
            ans++;
        
        v[t[i]] = i;
    }
    while(m--) {
        int a, b;
        cin >> a >> b;
        if(a > b)
            swap(a, b);
        if(t[a] == t[b]+1)
            ans--;
        if(t[a] == t[b]-1)
            ans++;
        if(v[t[a]+1] > a && v[t[a]+1] < b)
            ans++;
        if(v[t[a]-1] > a && v[t[a]-1] < b)
            ans--;
        if(v[t[b]-1] > a && v[t[b]-1] < b)
            ans++;
        if(v[t[b]+1] > a && v[t[b]+1] < b)
            ans--;
        v[t[a]] = b;
        v[t[b]] = a;
        swap(t[a], t[b]);
        cout << ans << endl;
    }
        return 0;
}