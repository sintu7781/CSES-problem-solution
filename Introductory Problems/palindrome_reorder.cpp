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
    string s;
    cin >> s;
    int n = s.size();
    vector<int> freq(26, 0);
    for(char& ch:s) {
        freq[ch - 'A']++;
    }
    bool odd = n & 1;
    string ans = "";
    char extra;
    for (int i = 0; i < 26;i++) {
        if(freq[i]&1) {
            if(!odd) {
            cout << "NO SOLUTION";
            return 0;
            } else {
                odd = false;
                extra = (i + 'A');
                for (int j = 0; j < freq[i] / 2;j++)
                    ans += (i + 'A');
            }
        } else {
            for (int j = 0; j < freq[i] / 2;j++)
                ans += (i + 'A');
        }
    }
    cout << ans;
    if(n&1)
        cout << extra;
    reverse(ans.begin(), ans.end());
    cout << ans;
    return 0;
}