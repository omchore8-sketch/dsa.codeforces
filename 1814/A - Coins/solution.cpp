#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
    while (t--) {
        long long n,k;
        cin >> n >> k;
        if(((long long)n%2 == 1) && ((long long)k%2 == 0)){
            cout << "NO
";
        }
    else{
        cout << "YES
";
    }
}
return 0;
}