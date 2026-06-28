#include <bits/stdc++.h>
using namespace std;
 
int main() {
    string s;
    cin >> s;
 
    map<char, char> mp;
 
    mp['A'] = 'A';
    mp['H'] = 'H';
    mp['I'] = 'I';
    mp['M'] = 'M';
    mp['O'] = 'O';
    mp['T'] = 'T';
    mp['U'] = 'U';
    mp['V'] = 'V';
    mp['W'] = 'W';
    mp['X'] = 'X';
    mp['Y'] = 'Y';
 
    mp['o'] = 'o';
    mp['v'] = 'v';
    mp['w'] = 'w';
    mp['x'] = 'x';
 
    mp['b'] = 'd';
    mp['d'] = 'b';
    mp['p'] = 'q';
    mp['q'] = 'p';
 
    int i = 0, j = s.size() - 1;
 
    while (i <= j) {
        if (mp.find(s[i]) == mp.end() || mp[s[i]] != s[j]) {
            cout << "NIE";
            return 0;
        }
        i++;
        j--;
    }
 
    cout << "TAK";
    return 0;
}