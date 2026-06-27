#include <bits/stdc++.h>
using namespace std;
 
bool check(int k, string &a, string &b) {
    int i = 0, j = 0;
 
    while (i < k && j < b.size()) {
        if (a[i] == b[j]) i++;
        j++;
    }
 
    return i == k;
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
 
    while (t--) {
        int n, m;
        cin >> n >> m;
 
        string a, b;
        cin >> a >> b;
 
        int low = 0, high = n, ans = 0;
 
        while (low <= high) {
            int mid = low + (high - low) / 2;
 
            if (check(mid, a, b)) {
                ans = mid;
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
 
        cout << ans << "
";
    }
 
    return 0;
}