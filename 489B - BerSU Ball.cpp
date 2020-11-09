#include <bits/stdc++.h>
using namespace std;
int arr1[500];
int arr2[500];
 
int main(){
   ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
    int n,m;
    cin>>n;
    int x;
    for(int i=0;i<n;++i)
        cin>>arr1[i];
	cin>>m;
    for(int i=0;i<m;++i)
        cin>>arr2[i];
	sort(arr1,arr1+n);
	sort(arr2,arr2+m);
	int ans=0;
 
	for(int i=0;i<n;++i)
		for(int j=0;j<m;++j){
			if(abs(arr1[i]-arr2[j])<2){
				ans++;
				arr2[j]=50000;
				break;
			}
		}
	
	cout<<ans;
    
 
    return 0;
}
 
