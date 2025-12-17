#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int x, n;
    cin >> x >> n;
    multiset<int> s;
    s.insert(x);
    set<int> st;
    st.insert(0);
    st.insert(x);
    for (int i = 0; i < n; i++) {
        int p;
        cin >> p;
        auto it = st.upper_bound(p);
        int r = *it;
        int l = *prev(it);
        auto temp = s.find(r - l);
        s.erase(temp);
        s.insert(r - p);
        s.insert(p - l);
        st.insert(p);
        cout << *s.rbegin() << " ";
    }
        return 0;
}