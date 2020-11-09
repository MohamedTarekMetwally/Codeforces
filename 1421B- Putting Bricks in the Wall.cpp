#include <bits/stdc++.h>
using namespace std;
char arr[500][500];
int main(){
   ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
    int t;
    cin>>t;
    int n;
   
    while(t--){
        int idx1=0;
        int idx2=0;
        cin>>n;
        for(int i=1;i<=n;++i){
            for(int j=1;j<=n;++j){
                cin>>arr[i][j];
            }
        }
                
        if(arr[1][2]==arr[2][1] && arr[n-1][n]==arr[n][n-1] && arr[1][2]!=arr[n-1][n])cout<<"0\n";
        else if(arr[1][2]==arr[2][1] && arr[n-1][n]==arr[n][n-1] && arr[1][2]==arr[n-1][n])cout<<"2\n"<<n<<" "<<n-1<<"\n"<<n-1<<" "<<n<<endl;
        else if(arr[1][2]==arr[2][1]){
 
            if(arr[n][n-1]==arr[1][2]){
                idx1=n;
                idx2=n-1;
                arr[n][n-1]=arr[n-1][n];
            }
            else{
                idx1=n-1;
                idx2=n;
                arr[n-1][n]=arr[n][n-1];
            }
            cout<<"1\n"<<idx1<<" "<<idx2<<endl;
        }
        else 
            if(arr[n][n-1]==arr[n-1][n]){
                if(arr[1][2]==arr[n][n-1]){
                    cout<<"1\n1 2\n";
                }
                else{
                    cout<<"1\n2 1\n";
                }
            
        }
        else{
			if(arr[1][2]!=arr[n][n-1]){
				cout<<2<<endl;
				cout<<1<<' '<<2<<endl;
				cout<<n<<' '<<n-1<<endl;
			}
            else{
				cout<<2<<endl;
				cout<<1<<' '<<2<<endl;
				cout<<n-1<<' '<<n<<endl;
			}
		}       
        
    
    }
 
   
    return 0;
}
