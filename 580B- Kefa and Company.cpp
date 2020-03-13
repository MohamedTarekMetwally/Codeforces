#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
ll n,d,arr[int(1e5)+5];
 
pair<int,int>p[10005];
int main(){
        ios::sync_with_stdio(0);
	    cin.tie(0);
        cin>>n>>d;
        for(int i=0;i<n;++i)
            cin>>p[i].first>>p[i].second;
        sort(p,p+n);
 
        ll l=0,h=0;
        ll sum=0,mx=0;
        while(h<n){
            if(p[h].first-p[l].first<d)
                sum+=p[h++].second;
            else
                sum-=p[l++].second;
            mx=max(sum,mx);
        }
        cout<<mx;
    
    return 0;
}
 
 
 
