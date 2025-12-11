#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    map<int, int> mp;
    for (int i = 0; i < n;i++) {
        int h;
        cin >> h;
        mp[h]++;
    }
    for (int i = 0; i < m;i++) {
        int t;
        cin >> t;
        auto it = mp.lower_bound(t);
        if(it == mp.begin() && (*it).first != t) {
            cout << -1 << endl;
            continue;
        }
        if((*it).first != t)
            it--;
        mp[(*it).first]--;
        if(mp[(*it).first] == 0)
            mp.erase((*it).first);
        cout << (*it).first << endl;
    }
        return 0;
}