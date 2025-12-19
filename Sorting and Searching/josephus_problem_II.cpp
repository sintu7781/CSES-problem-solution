#include <bits/stdc++.h>
using namespace std;

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

template <typename T>
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

using ll = long long;
using pii = pair<int,int>;

#define fastio ios::sync_with_stdio(false); cin.tie(nullptr)

const ll INFLL = 1e18;
const int INF = 1e9;
const int MOD = 1e9 + 7;

int main() {
    fastio;
    int n, k;
    cin >> n >> k;
    ordered_set<int> s;
    for (int i = 0; i < n;i++) {
        s.insert(i + 1);
    }
    int x = 0;
    while(!s.empty()) {
        x = (x + k) % s.size();
        auto it = s.find_by_order(x);
        cout << *it << " ";
        s.erase(it);
    }
    
    return 0;
}