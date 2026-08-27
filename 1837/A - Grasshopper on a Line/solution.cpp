#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
    while (t--) {
        int x, k;
        cin >> x >> k;
        if(x % k != 0){
            cout << "1
";
            cout << x << "
";
        }
    else{
        cout << "2
";
        cout << (x - k - 1) << " " << (k + 1) << "
";
    }
}
return 0;
}