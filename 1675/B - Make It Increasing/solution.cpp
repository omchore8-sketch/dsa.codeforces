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
        for(int i=0;i<n;i++){
            cin >> Q[i];
        }
    int ans=0;
    for(int i=n-2;i >= 0;i--){
        while(Q[i] >= Q[i+1]){
            ans++;
            Q[i] /= 2;
            if(Q[i] == 0){
                break;
            }
    }
if(Q[i] == 0 && Q[i+1] == 0){
    ans=-1;
    break;
}
}
cout << ans << "
";
}
 
return 0;
}