#include <bits/stdc++.h>
using namespace std;
vector<pair <int, int> >v;
int main()
{   
    int n,m,k,t;
    int a,b;
    cin>>n>>m>>k>>t;
    for(int i=0;i<k;++i){
        cin>>a>>b;
        v.push_back(make_pair(a,b));
    }
    while(t--){
        bool flag=false;
        cin>>a>>b;
        int ans=m*(a-1)+b;
        //cout<<ans;
        for(int i=0;i<k;++i){
            if(v[i].first==a && v[i].second==b)flag=true;
            if(v[i].first<a || (v[i].first==a && v[i].second<b)){
                ans--;
                //cout<<v[i].first<<"-----"<<v[i].second<<endl;
            }
        }
        //cout<<ans<<"--";
        if(flag)cout<<"Waste\n";
        else if(ans%3==1)cout<<"Carrots\n";
        else if(ans%3==2)cout<<"Kiwis\n";
        else if(ans%3==0)cout<<"Grapes\n";
 
    }
    
return 0;
}
