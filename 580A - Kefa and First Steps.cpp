#include <bits/stdc++.h>
using namespace std;
long long  arr[(int)1e5+5];
 
int main(){
   ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
    long long n;
    cin>>n;
    for(int i=0;i<n;++i)
        cin>>arr[i];
    int cnt=1;
    int mx=INT_MIN;
    for(int i=0;i<n-1;++i){
        if(arr[i]<=arr[i+1]){
            //cout<<cnt<<"--"<<i<<"--\n";
            cnt++;
            mx=max(cnt,mx);
        }
        else
            cnt=1;
    }
    if(mx==INT_MIN || mx<0)cout<<"1\n";
    else
        cout<<mx;
    
    return 0;
}
