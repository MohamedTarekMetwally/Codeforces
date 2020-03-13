#include <bits/stdc++.h>
using namespace std;
int main()
{ 
    int k,a,b,v;
    cin>>k>>a>>b>>v;
    int counter=0;
    while(a>0){
        if(b>=k-1){
            b-=(k-1);
            a-=(k*v);
            counter++;
        }
        else{
            //cout<<"B1--> "<<b<<" ";
            a-=(b+1)*v;
            b=0;
            counter++;
        }
    }
    cout<<counter;
 
    return 0;
}
