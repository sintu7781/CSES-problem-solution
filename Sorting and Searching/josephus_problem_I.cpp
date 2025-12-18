#include<bits/stdc++.h>
using namespace std;

void josephus(vector<int>& v) {
    int n = v.size();
    if(n == 1) {
        cout << v[0];
        return;
    }
    for (int i = 1; i < n;i+=2) {
        cout << v[i] << " ";
    }
    vector<int> a;
    if(n&1) {
        a.push_back(v[n - 1]);
        for (int i = 0; i < n - 1; i += 2) {
            a.push_back(v[i]);
        }
    } else {
        for (int i = 0; i < n;i+=2) {
            a.push_back(v[i]);
        }
    }
    josephus(a);
}

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n;i++) {
        v[i] = i + 1;
    }
    josephus(v);
    return 0;
}