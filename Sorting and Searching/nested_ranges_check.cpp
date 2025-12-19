#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using pii = pair<int,int>;

#define fastio ios::sync_with_stdio(false); cin.tie(nullptr)

const ll INFLL = 1e18;
const int INF = 1e9;
const int MOD = 1e9 + 7;

int main() {
    fastio;
    int n;
    cin >> n;
    vector<vector<int>> v(n, vector<int> (3));
    for (int i = 0; i < n;i++) {
        cin >> v[i][0] >> v[i][1];
        v[i][2] = i;
    }
    sort(v.begin(), v.end(), [](const vector<int> &a, const vector<int> &b) { 
        if(a[1] == b[1])
            return a[0] > b[0];
        return a[1] < b[1]; 
    });
    int mn = INT_MIN;
    vector<vector<int>> ans(2, vector<int>(n, 0));
    for (int i = 0; i < n;i++) {
        if(v[i][0] <= mn)
            ans[0][v[i][2]] = 1;
        mn = max(mn, v[i][0]);
    }
    sort(v.begin(), v.end(), [](const vector<int> &a, const vector<int> &b) { 
        if(a[0] == b[0])
            return a[1] > b[1];
        return a[0] < b[0]; 
    });
    int mx = INT_MIN;
    for (int i = 0; i < n;i++) {
        if(v[i][1] <= mx) {
            ans[1][v[i][2]] = 1;
        }
        mx = max(mx, v[i][1]);
    }
    for (int i = 0; i < 2;i++) {
        for (int j = 0; j < n;j++) {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    return 0;
}