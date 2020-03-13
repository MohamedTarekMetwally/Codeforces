#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr1[1000],arr2[1000],arr3[1005];
    memset(arr1,0,sizeof(arr1));
    memset(arr2,0,sizeof(arr2));
    memset(arr3,0,sizeof(arr3));
    int n;
    cin>>n;
    for(int i=0;i<n;++i){
        cin>>arr1[i]>>arr2[i];
        arr3[arr2[i]]++;
    }
    int counter=0;
    for(int i=0;i<n;++i){
        arr3[arr2[i]]--;
        if(arr3[arr1[i]]==0)
            counter++;
        arr3[arr2[i]]++;
    }   
   cout<<counter;
 
    return 0;
}
