#include <bits/stdc++.h>
using namespace std;

struct Fenwick {
    int n;
    vector<int> bit;
    Fenwick(int n) : n(n), bit(n + 1, 0) {}

    void update(int i, int v) {
        for (; i <= n; i += i & -i)
            bit[i] += v;
    }

    int query(int i) {
        int s = 0;
        for (; i > 0; i -= i & -i)
            s += bit[i];
        return s;
    }

    int rangeQuery(int l, int r) {
        return query(r) - query(l - 1);
    }
};

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
    vector<int> c;
    for (int i = 0; i < n;i++) {
        cin >> v[i][0] >> v[i][1];
        v[i][2] = i;
        c.push_back(v[i][0]);
        c.push_back(v[i][1]);
    }
    sort(c.begin(), c.end());
    c.erase(unique(c.begin(), c.end()), c.end());
    auto get_id = [&](int x) {
        return lower_bound(c.begin(), c.end(), x) - c.begin() + 1;
    };
    sort(v.begin(), v.end(), [](const vector<int> &a, const vector<int> &b) { 
        if(a[1] == b[1])
            return a[0] > b[0];
        return a[1] < b[1]; 
    });
    vector<vector<int>> ans(2, vector<int>(n, 0));
    Fenwick fw1(c.size());
    for (auto &i : v) {
        int l = get_id(i[0]);
        ans[0][i[2]] = fw1.rangeQuery(l, c.size());
        fw1.update(l, 1);
    }
    sort(v.begin(), v.end(), [](const vector<int> &a, const vector<int> &b) { 
        if(a[0] == b[0])
            return a[1] > b[1];
        return a[0] < b[0]; 
    });
    Fenwick fw2(c.size());
    for (auto &i : v) {
        int r = get_id(i[1]);
        ans[1][i[2]] = fw2.rangeQuery(r, c.size());
        fw2.update(r, 1);
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