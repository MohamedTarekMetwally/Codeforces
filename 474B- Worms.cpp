 #include <bits/stdc++.h>
using namespace std;
int search(int arr[],int l,int r,int x){
     while(l<=r){
         int m=(l+r)/2;
         if(x==arr[m])
            return m;
        else if(x>arr[m])
            l=m+1;
        
        else {
            if((arr[m-1]<x && m!=0) ||m==0){
            return m;
           }
            r=m-1;
        }
        
     }
    return -1;
}
 
 
int main()
{ 
    int n,m,x;
    cin>>n;
    int arr[n];
    int sum=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        sum+=arr[i];
        arr[i]=sum;
        //cout<<arr[i]<<" ";
 
    }
 
     cin>>m;
    for(int i=0;i<m;++i){
        cin>>x;
        x=search(arr,0,n-1,x);
        cout<<x+1<<endl;
    }
 
    return 0;
}
