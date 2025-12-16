#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    multiset<int> ms;
    for (int i = 0; i < n;i++) {
        int k;
        cin >> k;
        auto it = ms.upper_bound(k);
        if(it != ms.end()) {
            ms.erase(it);
        }
        ms.insert(k);
    }
    cout << ms.size();
    return 0;
}