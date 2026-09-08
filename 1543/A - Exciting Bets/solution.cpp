#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
    while (t--) {
        long long a, b;
        cin >> a >> b;
        long long gcd =abs(a-b);
        long long turn = 0;
        if (gcd != 0) {
            turn = min(b % gcd, gcd - b % gcd);
        }
    cout << gcd << " " << turn << "
";
}
return 0;
}