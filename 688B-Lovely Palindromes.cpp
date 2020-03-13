#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
string s,ans="";
string reverseStr(string str) 
{ 
    ll n = str.length(); 
  
    // Swap character starting from two 
    // corners 
    for (int i = 0; i < n / 2; i++) 
        swap(str[i], str[n - i - 1]); 
    
    return str;
}
int main(){
 
    cin>>s;
    cout<<s+reverseStr(s);
    return 0;
}
 
