#include <bits/stdc++.h>
 
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
 
        int total_cost = 0;
 
        for (int i = 0; i < n; i += k) {
            if (s.substr(i, k) == string(k, '1')) {
                total_cost++;
            }
    }
 
cout << total_cost << "
";
}
 
return 0;
}