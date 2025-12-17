#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> x(n);
    for (int i = 0; i < n;i++) {
        cin >> x[i];
    }
    int i = 0;
    int j = 0;
    long long ans = 0;
    unordered_map<int, int> m;
    while(j < n) {
        if(m[x[j]] > 0) {
            while(x[i] != x[j]) {
                m[x[i]]--;
                i++;
            }
            m[x[i]]--;
            i++;
        }
        m[x[j]]++;
        j++;
        ans += j-i;
    }
    cout << ans;
    return 0;
}