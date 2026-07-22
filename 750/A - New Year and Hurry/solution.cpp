#include <iostream>
using namespace std;
 
int main() {
    int n, k;
    cin >> n >> k;
 
    int available = 240 - k;
    int sum = 0;
    int count = 0;
 
    for (int i = 1; i <= n; i++) {
        sum += 5 * i;
 
        if (sum <= available)
            count++;
        else
            break;
    }
 
    cout << count;
 
    return 0;
}