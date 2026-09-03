#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
    while (t--) {
        int a,b,n;
        cin >> a >> b >> n;
        vector<int> Q(n);
        for(int i=0; i<n;i++){
            cin >> Q[i];
        }
    long long maximum_time=b;
    for (int i = 0; i < n; i++){
        maximum_time += min(Q[i], a - 1);
    }
cout << maximum_time<<"
";
}
return 0;
}