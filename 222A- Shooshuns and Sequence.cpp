 #include <bits/stdc++.h>
using namespace std;
 
int main()
{   
    int n,k;
    cin>>n>>k;
    int x;
    int lst=0,counter=0;
    for(int i=1;i<=n;++i) 
    {
        cin>>x;
        if(x==lst)counter++;
        else 
        counter=1;
        lst=x;
    }
 
    (counter+k>n) ? cout<<n-counter :cout<<"-1";
   
    return 0;
}
 
