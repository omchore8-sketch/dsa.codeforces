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
        vector<int> q(n);
        for (int i = 0; i < n; i++) {
            cin >> q[i];
        }
 
    sort(q.begin(), q.end());
 
    int count = 1;
    int maxx = 1;
 
    for (int i = 0; i < n - 1; i++) {
        if (q[i + 1] - q[i] <= k) {
            count++;
        } else {
        count = 1;
    }
maxx = max(maxx, count);
}
 
cout <<n-maxx << "
";
}
 
return 0;
}