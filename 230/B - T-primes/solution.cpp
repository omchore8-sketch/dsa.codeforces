#include <bits/stdc++.h>
using namespace std;
 
bool isPrime(long long n) {
    if (n < 2) return false;
 
    for (long long i = 2; i * i <= n; i++) {
        if (n % i == 0)
            return false;
    }
    return true;
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int n;
    cin >> n;
 
    while (n--) {
        long long x;
        cin >> x;
 
        long long r = sqrt(x);
 
        if (r * r == x && isPrime(r))
            cout << "YES
";
        else
            cout << "NO
";
    }
 
    return 0;
}