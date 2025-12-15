#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    unordered_set<int> s;
    int ans = 1;
    for (int i = 0; i < n;i++) {
        int x;
        cin >> x;
        if(s.count(x+1))
            ans++;
        s.insert(x);
    }
    cout << ans;
        return 0;
}