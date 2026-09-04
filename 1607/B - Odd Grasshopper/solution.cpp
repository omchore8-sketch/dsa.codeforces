#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
    while (t--) {
        long long x, n;
        cin >> x >> n;
 
        long long rem = n % 4;
        long long val = 0;
 
        if (rem == 1) val = -n;
        else if (rem == 2) val = 1;
        else if (rem == 3) val = n + 1;
        else if (rem == 0) val = 0;
 
        if (x % 2 == 0) {
            cout << x + val << "
";
        } else {
        cout << x - val << "
";
    }
}
return 0;
}