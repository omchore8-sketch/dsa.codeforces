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
        if(n<4 || n%2 == 1){
            cout << "-1
";
        }
    else{
        long long min_buses = (n + 5) / 6;
        long long max_buses =  n/4;
        cout << min_buses << " " << max_buses << '
';
    }
}
return 0;
}