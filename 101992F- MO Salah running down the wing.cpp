#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
//int arr[1000005];
int main()
{  
    freopen("mosalah.in","r",stdin);
    int t,n,m,x,y;
    scanf("%d",&t);
    while(t--){
    scanf("%d %d %d %d",&n,&m,&x,&y);
    x+=y;
     int ans=x*n-m;
    if(y==0 && m<n*x)
       printf("-1\n");    
    else if( x*n<m)
        printf("0\n");
    else
        printf("%d\n",ans);
    }
 
    return 0;
}
