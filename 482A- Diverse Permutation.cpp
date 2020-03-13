#include <bits/stdc++.h>
using namespace std;
int main()
{ 
    int n,k;
    cin>>n>>k;
    int j=k+1;
 
    for(int i=1;i<=j;i++){
        if(i==j)
            cout<<i<<" ";
        else 
            cout<<i<<" "<<j<<" ";
        j--;
    }
    for(int i=k+2;i<=n;i++)
        cout<<i<<" ";    
 
    return 0;
}
