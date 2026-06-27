#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin>>n;
 
    char s[20];
    int faces = 0;
 
    for (int i = 0; i < n; i++) {
        cin>>s;
 
        if (strcmp(s, "Tetrahedron") == 0)
            faces += 4;    
        else if (strcmp(s, "Cube") == 0)
            faces += 6;
        else if (strcmp(s, "Octahedron") == 0)
            faces += 8;
        else if (strcmp(s, "Dodecahedron") == 0)
            faces += 12;
        else if (strcmp(s, "Icosahedron") == 0)
            faces += 20;
    }
 
    cout<<faces;
 
    return 0;
}