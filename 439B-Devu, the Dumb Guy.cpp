#include <iostream>
#include <algorithm>
#include <math.h>
#include <bits/stdc++.h>
using namespace std;
 
long long arr[(int)1e5+5];
 
int main()
{
    long long n,x,v,ans=0;
    cin>>n>>x;
     for(int i=0;i<n;++i)
        cin>>arr[i];
    sort(arr,arr+n);
 
    for(int i=0;i<n;++i){
        if(x==1)
            ans+=(arr[i]*x);
        else{
            ans+=arr[i]*(x);
            --x;
        }
    }
    cout<<ans;
 
return 0;
}
