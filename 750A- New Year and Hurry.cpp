#include <bits/stdc++.h>
using namespace std;
int main()
{  
    int n,k;
    cin>>n>>k;
    int t=240-k;
    //cout<<t<<endl;
    int ans=0,counter=0;
    for(int i=1; i<=n  ;++i){
        ans+=5*i;
        if(ans<=t)
            counter++;
    }
    cout<<counter;
    return 0;
}
