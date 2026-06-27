#include <iostream>
using namespace std;
 
int main() {
    int n, m;
    cin >> n >> m;
 
    if (n >= 31)
        cout << m;
    else
        cout << m % (1 << n);
 
    return 0;
}