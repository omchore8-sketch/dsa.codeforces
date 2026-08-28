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
 
        vector<int> Q(n);
 
        for (int i = 0; i < n; i++) {
            cin >> Q[i];
        }
 
    int count = 0;
    int length = 0;
 
    for (int i = 0; i < n; i++) {
        if (Q[i] == 0) {
            count++;
            length = max(length, count);
        } else {
        count = 0;
    }
}
 
cout << length << '
';
}
 
return 0;
}