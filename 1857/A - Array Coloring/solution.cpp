#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
    while (t--) {
        int x;
        cin >> x;
        vector<int> Q(x);
        for(int i=0;i<x;i++){
            cin >> Q[i];
        }
    int k=0;
    for(int i=0;i<x;i++){
        k=k+Q[i];
    }
if(x%2 == 0){
    x=x/2;
}
else{
    x=(int)x/2;
}
int sum=0;
for(int i=0;i<x;i++){
    sum=sum+Q[i];
}
int m=k-sum;
if(sum%2 == 0 && m%2 == 0){
    cout << "Yes
";
}
else if(sum%2 != 0 && m%2 != 0){
    cout << "Yes
";
}
else{
    cout << "No
";
}
}
return 0;
}