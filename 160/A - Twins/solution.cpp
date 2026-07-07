#include <iostream>
#include <algorithm>
using namespace std;
 
int main() {
    int n;
    cin >> n;
 
    int a[105];
    int total = 0;
 
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        total += a[i];
    }
 
    sort(a, a + n, greater<int>());
 
    int mySum = 0;
    int count = 0;
 
    for (int i = 0; i < n; i++) {
        mySum += a[i];
        count++;
 
        if (mySum > total - mySum) {
            break;
        }
    }
 
    cout << count << endl;
 
    return 0;
}