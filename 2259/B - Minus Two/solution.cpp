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
 
        int count_odd = 0;
        int count_even_0 = 0;
        int count_even_2 = 0;
 
        for (int i = 0; i < n; ++i) {
            long long x;
            cin >> x;
            if (x % 2 != 0) {
                count_odd++;
            } else {
            if ((x / 2) % 2 == 0) {
                count_even_0++;
            } else {
            count_even_2++;
        }
}
}
 
cout << max({count_odd, count_even_0, count_even_2}) << "
";
}
return 0;
}