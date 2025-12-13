#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, x;
    cin >> n >> x;
    vector<pair<int, int>> a(n);
    for (int i = 0; i < n;i++) {
        cin >> a[i].first;
        a[i].second = i+1;
    }
    sort(a.begin(), a.end());
    int i = 0;
    int j = n - 1;
    while(i < j) {
        if(a[i].first + a[j].first == x) {
            cout << a[i].second << " " << a[j].second;
            return 0;
        } else if(a[i].first + a[j].first > x) {
            j--;
        } else {
            i++;
        }
    }
    cout << "IMPOSSIBLE";
    return 0;
}