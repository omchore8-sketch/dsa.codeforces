#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        int n;
        cin >> n;
 
        int neg = 0;
 
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            if (x == -1)
            neg++;
        }
 
    int ans = 0;
 
    if (neg % 2 == 1) {
        neg--;
        ans++;
    }
 
while (neg > n / 2 || neg%2 != 0) {
    neg--;
    ans++;
}
 
cout << ans << "
";
}
return 0;
}
 