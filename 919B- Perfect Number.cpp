#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
bool check(int n){
    int sum=0;
    while(n>0){
        sum+=n%10;
        n/=10;
        //cout<<ans<<" ";
    }
    //cout<<endl;
    return sum==10;
}
 
int main()
{  
    int t,ans=0;
   cin>>t;
   while(t){
      ans++; 
       if(check(ans))
         t--;
   }
   cout<<ans;
   
    return 0;
}
