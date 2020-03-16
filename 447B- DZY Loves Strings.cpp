#include<bits/stdc++.h>
 using namespace std; 
 
vector<int>v;
 int main()
 {  
      int k,b;
     string s;
     cin>>s;
    
     cin>>k;
 
     for(int i=0;i<26;i++){
         cin>>b;
         v.push_back(b);
     }
    int mx=*max_element(v.begin(),v.end());
    long long out=0;
    for(int i=0;i<s.length();i++){
        out+=v[s[i]-'a']*(i+1);
    }
    int j=s.length()+1;
    while(k--){
        out+=(j*mx);
        ++j;
    }
        cout<<out;
 
     return 0;
 }
