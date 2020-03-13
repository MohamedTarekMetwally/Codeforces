#include <bits/stdc++.h>
using namespace std;
 
int s[15];
 
int main()
{  //                1    2   3   4    5   6   7    8   9   10  11  12
    string arr[12]={"C","C#","D","D#","E","F","F#","G","G#","A","B","H"};
 
    string a,b,c;
    cin>>a>>b>>c;
    for(int i=0;i<12;++i)
        if(arr[i]==a || arr[i]==b || arr[i]==c)
            s[i]=1;
    
    for(int i=0;i<12;++i){
 
        if(s[i]){
            if(s[(i+4)%12] && s[(i+7)%12]){
                cout<<"major";
                return 0;
            } 
            if(s[(i+3)%12]&&s[(i+7)%12]){
                cout<<"minor";
                return 0;
            }
 
        }
    }
    cout<<"strange";
 
    
    return 0;
}
