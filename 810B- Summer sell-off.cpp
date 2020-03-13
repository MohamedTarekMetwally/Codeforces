#include <bits/stdc++.h>
using namespace std;
int n,f;
vector <int>v;
int main()
{   
    int x,y;
    long long ans=0;
    cin>>n>>f; 
    for(int i=0;i<n;++i){
        cin>>x>>y;
        ans+=min(x,y);
        v.push_back(min(2*x,y)-min(x,y));
    }
    sort(v.rbegin(),v.rend());
    for(int i=0;i<f;++i)
        ans+=v[i];
    cout<<ans;
 
return 0;
}
