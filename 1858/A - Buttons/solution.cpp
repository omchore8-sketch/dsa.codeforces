#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t = 1;
    cin >> t;
    while (t--) {
        int a,b,c;
        cin >> a >> b >> c;
        int i=a+c;
        int j=b+c;
        if(i>j){
            cout << "First
";
        }
    else if(i<j){
        cout << "Second
";
    }
else if(i=j && c%2 == 0){
    cout << "Second
";
}
else{
    cout << "First
";
}
}
return 0;
}