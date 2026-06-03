#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using pii = pair<int,int>;

#define fastio ios::sync_with_stdio(false); cin.tie(nullptr)

const ll INFLL = 1e18;
const int INF = 1e9;
const int MOD = 1e9 + 7;

vector<string> grayCode(int n) {
    if(n == 1)
        return {"0", "1"};
    vector<string> prevGrayCode = grayCode(n - 1);
    vector<string> reversed = prevGrayCode;
    reverse(reversed.begin(), reversed.end());
    int length = reversed.size();
    for (int i = 0; i < length;i++) {
        string appendZero = "0" + prevGrayCode[i];
        prevGrayCode[i] = "1" + reversed[i];
        prevGrayCode.push_back(appendZero);
    }
    return prevGrayCode;
}

int main() {
    fastio;
    int n;
    cin >> n;
    vector<string> ans = grayCode(n);
    for (int i = 0; i < (1 << n);i++)
        cout << ans[i] << "\n";
    return 0;
}