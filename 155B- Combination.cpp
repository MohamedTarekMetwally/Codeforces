 #include <bits/stdc++.h>
using namespace std;
int arr[1000000];
 
int main()
{     
    int n;
    cin>>n;
    pair<int,int>p[n+5];
 
    for(int i=0;i<n;++i)
        cin>>p[i].second>>p[i].first;
 
 
    sort(p,p+n);
    int ans=0,check=1;
 
    for(int i=n-1;i>=0 && check>0;--i){
        ans+=p[i].second;
        check+=p[i].first-1;
    }
    cout<<ans;
 
    return 0;
}
 
