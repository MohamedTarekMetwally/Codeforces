#include <iostream>
#include <algorithm>
#include <math.h>
#include <string> 
#include <bits/stdc++.h>
using namespace std;
 
int a=0;
int b=0;
int c=0;
 
void eh(char up,char down){
    if(up=='A') a++;
    if(up=='B') b++;
    if(up=='C') c++;
}
 
int main()
{   
    string s1,s2,s3;
    cin>>s1>>s2>>s3;
 
 
    if(s1[1]=='>'){
        eh(s1[0],s1[2]);
        //cout<<"S1 --> "<<a<<b<<c<<endl;
    }
    else if(s1[1=='<']){
        eh(s1[2],s1[0]);
        //cout<<"S1 --> "<<a<<b<<c<<endl;
    }
    //
    if(s2[1]=='>'){
        eh(s2[0],s2[2]);
        // cout<<"S2 --> "<<a<<b<<c<<endl;
    }
    else if(s2[1]=='<'){
        eh(s2[2],s2[0]);
        //cout<<"S2 --> "<<a<<b<<c<<endl;
    }
    //
    if(s3[1]=='>'){
        eh(s3[0],s3[2]);
        //cout<<"S3 --> "<<a<<b<<c<<endl;
    }
    else if(s3[1=='<']){
        eh(s3[2],s3[0]);
        //cout<<"S3 --> "<<a<<b<<c<<endl;
    }
    //
    //cout<<a<<" "<<b<<" "<<c<<endl; 
    if(a==b || b==c ||c==a){
        cout<<"Impossible";
    }
    else{
        if(a<b && a<c){
            cout<<"A";
            if(b<c)
                cout<<"BC";
            else cout<<"CB";
        }
        if(b<a && b<c){
            cout<<"B";
            if(a<c){
                cout<<"AC";
            }
            else cout<<"CA";
        }
        if(c<b && c<a){
            cout<<"C";
            if(b<a){
                cout<<"BA";
            }
            else cout<<"AB";
        }
    }
     
return 0;
}
