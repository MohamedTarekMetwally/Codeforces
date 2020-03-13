#include<bits/stdc++.h>
 using namespace std; 
 
vector<int>v[26];
int main(){
 
  int r,x,y,n,m;
  cin>>r>>x>>y>>n>>m;
  double dist=sqrt(pow(n-x,2.0)+pow(m-y,2.0));
  cout<<(int)ceil(dist/(2*r));
 
  return 0;
}
