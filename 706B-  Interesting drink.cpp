#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll arr[100005];
ll n,q,x;
 
int main()
{  
 
    cin>>n;
    for(int i=1;i<=n;++i)
        cin>>arr[i];
    
    sort(arr+1,arr+n+1);
 
    cin>>q;
    
    while(q--){
    int counter=0;
        cin>>x;
        ll u=upper_bound(arr+1,arr+1+n,x)-arr;
        cout<<u-1<<endl;
    }
 
    return 0;
}
