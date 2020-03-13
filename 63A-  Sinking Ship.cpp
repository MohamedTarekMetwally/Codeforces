#include <bits/stdc++.h>
using namespace std;
 
pair<string,string>p[100];
string rats[100],WandC[100],captin[100],man[100];
int Rcounter,WCcounter,Ccounter,Mcounter;
 
int search(string s){
    if(s=="rat")
        return 1;
    if(s=="woman" || s=="child")
        return 2;
    if(s=="man")
        return 3;
    if(s=="captain")
        return 4;
}
void solve(){
    
    for(int i=0;i<Rcounter;++i)
        cout<<rats[i]<<endl;
 
    for(int i=0;i<WCcounter;++i)
        cout<<WandC[i]<<endl;
 
    for(int i=0;i<Mcounter;++i)
        cout<<man[i]<<endl;
 
    for(int i=0;i<Ccounter;++i)
        cout<<captin[i]<<endl;
 
 
}
 
int main()
{  
 
    int n,i=0;
    cin>>n;
    int m=n;
    while(m--){
    
        string s1,s2;
        cin>>s1>>s2;
        p[i].first=s1;
        p[i++].second=s2;
    }
    int j=0;
 
    for( i=0;i<n;++i){
        int x=search(p[i].second);
        //cout<<x<<endl;;
        if(x==1){
        rats[Rcounter++]=p[i].first;  
        }
        else if(x==2){
        WandC[WCcounter++]=p[i].first;
        
        }
        else if(x==3){
        man[Mcounter++]=p[i].first;  
        }
          
        else if(x==4){
        captin[Ccounter++]=p[i].first;
        }
        
 
    }
 
    solve();
    
 
 
 
    return 0;
}
