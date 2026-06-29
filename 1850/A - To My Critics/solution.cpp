#include <bits/stdc++.h>
using namespace std;
 
int main() {
	// your code goes here
int n;
cin>>n;
while(n--){
 int a,b,c;
 cin>>a>>b>>c;
 if(a + b >= 10 || b + c >= 10 || a + c >= 10)
  cout<<"YES"<<"
";
  else 
  cout<<"NO"<< "
";
    
}
return 0;
}