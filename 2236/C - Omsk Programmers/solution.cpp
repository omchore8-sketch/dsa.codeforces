#include<bits/stdc++.h>
 
using namespace std;
 
int counter = 0;
 
int solve(int a, int b, int x){
    if(abs(a-b)==1) {
        return 1;
          
    }
    else if(a==b){
        return 0;
    }
    else if(x > a && x > b){
        return 2;
    }
    
    else if(a>b){
       a = a/x; 
       return 1 + min(abs(a-b),solve(a,b,x));
    }
    else if(b>a){
       b = b/x; 
       return 1+ min(abs(a-b),solve(a,b,x));
    }
 
    
 
}
 
 
 
 
int main() {
    
    
 
    
    int t;
    cin >> t;
    while(t--){
        int a,b,x;
        cin >> a >> b >>x;
 
        int y = solve(a,b,x);
        
        if(abs(a-b)< y){
            cout << abs(a-b) << endl;
        }
        
 
        else{
            cout << y << endl;
 
        }
        
    }
}