#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> k(n);
    for (int i = 0; i < n;i++) {
        cin >> k[i];
    }
    int ans = 0;
    int i = 0;
    int j = 0;
    set<int> s;
    while(j < n) {
        s.insert(k[j]);
        if(s.size() != j-i+1) {
            while(k[i] != k[j]) {
                s.erase(k[i]);
                i++;
            }
            i++;
        }
        j++;
        ans = max(ans, j - i);
    }
    cout << ans;
    return 0;
}