#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        string x, s;
        cin >> x >> s;
 
        int count = 0;
        bool found = false;
 
        while (x.length() < m) {
            x += x;
            count++;
        }
 
    if (x.find(s) != string::npos) {
        cout << count << "
";
        continue;
    }
 
x += x;
count++;
if (x.find(s) != string::npos) {
    cout << count << "
";
    continue;
}
 
x += x;
count++;
if (x.find(s) != string::npos) {
    cout << count << "
";
} else {
cout << -1 << "
";
}
}
return 0;
}