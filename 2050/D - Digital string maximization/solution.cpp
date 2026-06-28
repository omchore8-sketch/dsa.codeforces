#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
 
    while (t--) {
        string s;
        cin >> s;
 
        int n = s.size();
 
        for (int i = 0; i < n; i++) {
            int best = i;
 
            for (int j = i + 1; j < min(n, i + 10); j++) {
                int cur = (s[j] - '0') - (j - i);
                int mx = (s[best] - '0') - (best - i);
 
                if (cur > mx)
                    best = j;
            }
 
            while (best > i) {
                s[best]--;
                swap(s[best], s[best - 1]);
                best--;
            }
        }
 
        cout << s << '
';
    }
 
    return 0;
}