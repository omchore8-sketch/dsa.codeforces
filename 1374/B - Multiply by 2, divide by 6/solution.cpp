#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        long long count_3=0;
        long long count_2=0;
 
        while(n > 0 && n % 3 == 0){
            count_3++;
            n /= 3;
        }
    while(n > 0 && n % 2 == 0){
        count_2++;
        n /= 2;
    }
    if(n>1 || count_2>count_3){
        cout<<"-1
";
    }
    else{
        cout<<count_3+(count_3-count_2)<<"
";
    }
}
return 0;
}