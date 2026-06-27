#include <iostream>
using namespace std;
 
int main() {
    int a, b, c;
    cin >> a >> b >> c;
 
    int x1 = a + b + c;
    int x2 = a * b * c;
    int x3 = (a + b) * c;
    int x4 = a * (b + c);
    int x5 = a + b * c;
    int x6 = a * b + c;
 
    int mx = x1;
 
    if (x2 > mx) mx = x2;
    if (x3 > mx) mx = x3;
    if (x4 > mx) mx = x4;
    if (x5 > mx) mx = x5;
    if (x6 > mx) mx = x6;
 
    cout << mx << endl;
 
    return 0;
}