#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{ 
    string n,m;
    cin>>n>>m;
    sort(m.begin(),m.end());
    
    int j=m.size()-1;
 
    for(int i=0;i<n.length();i++){  
        if(n[i]<m[j] && j>=0)
            n[i]=m[j--];
   
    } 
    cout<<n;
 
    return 0;
}

