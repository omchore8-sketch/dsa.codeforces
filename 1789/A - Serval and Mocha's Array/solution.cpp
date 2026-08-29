#include <iostream>
#include <vector>
#include <numeric>
 
using namespace std;
 
void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
 
 
for (int i = 0; i < n; i++) {
    for (int j = i + 1; j < n; j++) {
        if (std::gcd(a[i], a[j]) <= 2) {
            cout << "YES
";
            return;
        }
}
}
 
cout << "NO
";
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
return 0;
}