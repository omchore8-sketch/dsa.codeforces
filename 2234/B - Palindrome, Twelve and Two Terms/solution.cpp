#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
 
    while (t--) {
        long long n;
        cin >> n;
 
        if (n % 12 != 10) {
            cout << n % 12 << " " << n - (n % 12) << "
";
        }
        else {
            if (n == 10)
                cout << -1 << "
";
            else
                cout << 22 << " " << n - 22 << "
";
        }
    }
 
    return 0;
}