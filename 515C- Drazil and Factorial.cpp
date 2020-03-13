#include<bits/stdc++.h>
 
using namespace std;
typedef long long ll;
 
string Erase(string s){
    for(int i=0;i<s.length();++i){
        if(s[i]=='0' || s[i]=='1')
           s.erase(i);
    }
    return s;
}
 
int main()
{    /////////////// 0   1   2   3    4    5   6    7    8      9 
    string arr[11]={"0","0","2","3","223","5","35","7","2227","2337"};
    int n;
    cin>>n;
    string s;
    cin>>s;
    string ans;
    for(int i=0;i<n;++i){
        ans+=arr[s[i]-'0'];
    }
    sort(ans.rbegin(),ans.rend());
    ans=Erase(ans);
    cout<<ans;
  
         
   
    return 0;
}
