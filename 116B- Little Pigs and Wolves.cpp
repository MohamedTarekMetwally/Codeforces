#include<bits/stdc++.h>
using namespace std;
int v;
int main(){
    int n,m;
    cin>>n>>m;
    char c[n+5][m+5];
    for(int i=0;i<n;++i)
        for(int j=0;j<m;++j)
            cin>>c[i][j];
 
    int counter=0;
    for(int i=0;i<n;++i)
        for(int j=0;j<m;++j){
            if(c[i][j]=='W'){
                if(c[i+1][j]=='P'){
                   c[i+1][j]=='.';
                   counter++;
                }
                else if(c[i-1][j]=='P'){
                   c[i-1][j]=='.';
                   counter++;
                }
                else if(c[i][j+1]=='P'){
                   c[i][j+1]=='.';
                   counter++;
                }
                else if(c[i][j-1]=='P'){
                   c[i][j-1]=='.';
                   counter++;
                }
            }
        }
    cout<<counter;
        
	return 0;
}
