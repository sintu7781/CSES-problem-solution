#include<bits/stdc++.h>
using namespace std;

int main() {
    int q;
    cin >> q;
    vector<long long> digits;
    digits.push_back(0);
    int len = 0;
    long long x = 1;
    while(digits[len] < 1e18) {
        digits.push_back(1LL * 9 * (len + 1) * x + digits[len]);
        len++;
        x *= 10;
    }
    while (q--)
    {
        long long k;
        cin >> k;
        int inDigit = 0;
        for (int i = 1; i <= len; i++)
        {
            if (k <= digits[i])
            {
                inDigit = i;
                break;
            }
        }
        long long rem = k - digits[inDigit - 1];
        long long div = (rem - 1) / inDigit;
        long long mod = (rem - 1) % inDigit;
        long long num = 1;
        for (int i = 1; i < inDigit;i++) {
            num *= 10;
        }
        long long digit = num + div;
        string s = to_string(digit);
        cout << s[mod] << endl;
    }
    return 0;
}