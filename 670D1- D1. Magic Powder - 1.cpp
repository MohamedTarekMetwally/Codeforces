#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 int arr1[1005];
 int arr2[1005];
 int n,k;
bool check(int x){
    int b=k;
    for(int i=0;i<n;++i){
        if(x*arr1[i]>arr2[i])
            b-=(arr1[i]*x)-arr2[i];
       
    }
    if(b<0)
        return false;
    return true;
}
 
 
int main()
{   
    cin>>n>>k;
    for(int i=0;i<n;++i)
        cin>>arr1[i];
      
    for(int i=0;i<n;++i)
        cin>>arr2[i];
 
    int st=0,en=10005,mid=0,ans=0;
 
    while(st<=en){
        mid=(st+en)/2;
        if(check(mid)){
            ans=mid;
            st=mid+1;
        }
        else 
            en=mid-1;
        
    }
    cout<<ans;
   
    return 0;
}
