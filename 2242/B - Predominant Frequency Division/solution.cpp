#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int T;
    cin >> T;
 
    while (T--) {
        int n;
        cin >> n;
 
        vector<int> p1(n + 1, 0), p2(n + 1, 0), p3(n + 1, 0);
 
        for (int i = 1; i <= n; i++) {
            int x;
            cin >> x;
 
            p1[i] = p1[i - 1];
            p2[i] = p2[i - 1];
            p3[i] = p3[i - 1];
 
            if (x == 1) p1[i]++;
            else if (x == 2) p2[i]++;
            else p3[i]++;
        }
 
        bool ok = false;
 
        for (int i = 1; i <= n - 2 && !ok; i++) {
            int one = p1[i];
            int two = p2[i];
            int three = p3[i];
 
            if (one < two + three) continue;
 
            for (int j = i + 1; j <= n - 1; j++) {
                one = p1[j] - p1[i];
                two = p2[j] - p2[i];
                three = p3[j] - p3[i];
 
                if (one + two >= three) {
                    ok = true;
                    break;
                }
            }
        }
 
        cout << (ok ? "YES
" : "NO
");
    }
}