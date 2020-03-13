 #include <bits/stdc++.h>
using namespace std;
long long nb,ns,nc;
long long pb,ps,pc;
long long b,c,s,r;
bool yarab(long long mid){
    long long sum=0,b1=b,s1=s,c1=c;
    b1-=nb*mid;
    s1-=ns*mid;
    c1-=nc*mid;
    if(b1<0)
    sum+=abs(b1)*pb;
    if(s1<0)
    sum+=abs(s1)*ps;
    if(c1<0)
    sum+=abs(c1)*pc;
 
    return sum<=r;
}
 
 
int main()
{   
    string s2;
    cin>>s2;
    cin>>b>>s>>c;
    cin>>pb>>ps>>pc;
    cin>>r;
    for(int i=0; i<s2.size(); i++)
    {
        if(s2[i]=='B')nb++;
        if(s2[i]=='S')ns++;
        if(s2[i]=='C')nc++;
    }
 
    long long l=0,r=1e14,mid,ans=0;
    while(l<=r)
    {
        mid=(l+r)/2;
        if(yarab(mid))
        { ans=max(ans,mid);
            l=mid+1;
        }
        else r=mid-1;
    }
    cout<<ans;
    return 0;
}

