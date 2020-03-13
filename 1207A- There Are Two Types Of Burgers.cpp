#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int arr[1000005];
int main()
{  
    int t;
    cin>>t; 
    int buns,burger,chicken,PrChicken,PrBurger;
    while(t--){
        int ans=0;
      cin>>buns>>burger>>chicken>>PrBurger>>PrChicken;
      buns=buns/2;
        if(PrBurger>PrChicken){
            ans=min(burger,buns)*PrBurger;
            buns-=min(burger,buns);
            ans+=min(chicken,buns)*PrChicken;
        }
        else{
            ans=min(chicken,buns)*PrChicken;
            buns-=min(chicken,buns);
            ans+=min(burger,buns)*PrBurger;
 
 
        }
    cout<<ans<<endl;
 
    }
   
    return 0;
}
