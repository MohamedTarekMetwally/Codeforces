#include <bits/stdc++.h>
using namespace std;
int divi[(int)1e6+5];
int countDivisors(int n) 
{ 
    int cnt = 0; 
    for (int i=1;i<=sqrt(n);i++) { 
        if (n%i==0){ 
            if(n/i==i) 
                cnt++; 
            else 
                cnt=cnt+2; 
        } 
    } 
    return cnt; 
} 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int a,b,c;
    long long ans=0;
    long long cnt=0;
    cin>>a>>b>>c;
    for(int i=1;i<=a;++i)
        for(int j=1;j<=b;++j)
            for(int k=1;k<=c;++k){
                //cout<<"-->"<<divi[i*j*k]<<endl;
               if(divi[i * j *k] > 0)
                    ans += divi[i * j * k] % 1073741824;  
                else{
                    divi[i*j*k] = countDivisors(i*j*k);
                    ans += divi[i*j*k] % 1073741824;
                }
            }
    cout<<ans%1073741824;
    
    return 0;
}   
