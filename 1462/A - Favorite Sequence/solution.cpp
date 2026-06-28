#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    int t;
    cin >> t;
    int n;
    while (t--) {
        cin >> n;
 
        vector < int > b(n);
 
        for (int i = 0; i < n; i++)
            cin >> b[i];
 
        int left = 0;
        int right = n - 1;
 
        vector < int > a;
 
        while (left <= right) {
            a.push_back(b[left]);
            left++;
 
            if (left <= right) {
                a.push_back(b[right]);
                right--;
            }
        }
 
        for (int x: a)
            cout << x << " ";
        cout << "
";
 
    }
 
return 0;
}