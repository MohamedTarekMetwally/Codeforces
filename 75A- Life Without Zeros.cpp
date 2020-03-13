#include<bits/stdc++.h>
#include<string>
#include <iostream>
 using namespace std; 
int shyl(int n){
   int m=0,p=1;
   while(n!=0){
       int d=n%10;
       n/=10;
       if(d!=0){
           m+=d*p;
           p*=10;       
        }
   }
 
    return m;
}
 
int main(){
 
    int a,b,c;
    cin>>a>>b;
    c=a+b;
    int A,B,C;
    A=shyl(a);
    B=shyl(b);
    C=shyl(c);
    if(A+B==C)
        cout<<"YES";
    else
        cout<<"NO";
       
    
    
 
 return 0;
}

