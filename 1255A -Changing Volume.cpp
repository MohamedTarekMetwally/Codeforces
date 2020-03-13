#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
 
string s;
int main()
{  
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    int a,b;
    cin>>n;
    while(n--){
        cin>>a>>b;
        int c=0;
        a=abs(b-a);
        c+=a/5;
        a=a%5;
        c+=(a/2)+(a%2);
        cout<<c<<endl;
    }
return 0;
}
