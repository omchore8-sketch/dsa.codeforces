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
        for(int i = 0; i < n; i++){
            cin >> Q[i];
        }
    int oper = 0;
    for(int i = 0; i < n - 1; i++){
        int j = i + 1;
        if((Q[i] % 2 == 1 && Q[j] % 2 == 1) || (Q[i] % 2 == 0 && Q[j] % 2 == 0)) {
            oper++;
        }
}
cout << oper << "
";
}
return 0;
}