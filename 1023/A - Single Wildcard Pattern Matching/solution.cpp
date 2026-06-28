#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n, m;
    cin >> n >> m;
 
    string s, t;
    cin >> s >> t;
 
    int pos = -1;
 
    // Find '*'
    for (int i = 0; i < n; i++) {
        if (s[i] == '*') {
            pos = i;
            break;
        }
    }
 
    if (pos == -1) {
        if (s == t)
            cout << "YES";
        else
            cout << "NO";
        return 0;
    }
    
    if (m < n - 1) {
        cout << "NO";
        return 0;
    }
 
    
    for (int i = 0; i < pos; i++) {
        if (s[i] != t[i]) {
            cout << "NO";
            return 0;
        }
    }
 
    int suffix = n - pos - 1;
 
    for (int i = 0; i < suffix; i++) {
        if (s[n - 1 - i] != t[m - 1 - i]) {
            cout << "NO";
            return 0;
        }
    }
 
    cout << "YES";
 
    return 0;
}