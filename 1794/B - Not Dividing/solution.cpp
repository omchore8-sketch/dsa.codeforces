#include <iostream>
#include <vector>
 
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> q(n);
        for (int i = 0; i < n; i++) {
            cin >> q[i];
            if (q[i] == 1) {
                q[i]++;
            }
    }
for (int i = 0; i < n - 1; i++) {
    if (q[i + 1] % q[i] == 0) {
        q[i + 1]++;
    }
}
 
for (int i = 0; i < n; i++) {
    cout << q[i] << " ";
}
cout << "
";
}
return 0;
}