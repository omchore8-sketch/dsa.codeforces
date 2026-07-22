#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector < int > v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }
 
 
        for (int i = 0; i < n ; i++) {
            int greater = 0;
            int lesser = 0;
            for (int j = i + 1; j < n; j++) {
                if (v[i] > v[j]) greater++;
                else if (v[i] < v[j]) lesser++;
 
 
            }
 
            cout << max(greater, lesser) << " ";
        }
        
        cout<< endl;
    }
}