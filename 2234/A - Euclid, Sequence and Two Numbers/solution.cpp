#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
 
    while (t--) {
        int n;
        cin >> n;
 
        vector<long long> a(n);
 
        for (int i = 0; i < n; i++)
            cin >> a[i];
 
        sort(a.begin(), a.end(), greater<long long>());
 
        bool ok = true;
 
        for (int i = 0; i + 2 < n; i++) {
            if (a[i] % a[i + 1] != a[i + 2]) {
                ok = false;
                break;
            }
        }
 
        if (ok)
            cout << a[0] << " " << a[1] << "
";
        else
            cout << -1 << "
";
    }
 
    return 0;
}