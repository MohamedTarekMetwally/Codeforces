#include <bits/stdc++.h>
using namespace std;
int arr[(int)1e5+5];
long long N=(int)1e3+5;
int main(){
    ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
    int t,n,m;
    cin>>t;
 
    while(t--){
        cin>>n;
        for(int i=0;i<n-1;++i){
            for(int j=0;j<n;++j){
                if(j==i || j==i+1)cout<<"1 ";
                else cout<<"0 ";
            }
            cout<<"\n";
        }
        for(int i=0;i<n;++i){
            if(i==0 || i==n-1)cout<<"1 ";
            else cout<<"0 ";
        }
        cout<<"\n";
    } 
    return 0; 
}