#include <bits/stdc++.h>
using namespace std;
 
int arr[800];
int main()
{  
    memset(arr,0,sizeof(arr));
   int n,k,c,d;
   cin>>n>>k>>c;
   for(int i=0;i<c;++i){
       cin>>d;
       arr[d]++;
   }
   int counter=0,ans=0;
 
   for(int i=1;i<=n;++i){
       if(arr[i]!=0){
           counter=0;
           ans++;
       }
       else{
           counter++;
           if(counter==k)
           {
               counter=0;
               ans++;
           }
 
       }
   }
   cout<<ans;
   
 
    return 0;
}
