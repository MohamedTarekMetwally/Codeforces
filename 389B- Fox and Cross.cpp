#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int n;
    cin>>n;
    char arr[n+5][n+5];
        
		for (int i = 0; i < n; i++)
            for(int j=0;j<n;j++)
                cin>>arr[i][j];
		
		bool flag = true;
		for (int i = 1; i < n; i++){
			for (int j = 1; j < n; j++){
				if (arr[i][j] == '#' && arr[i - 1][j] == '#' && arr[i + 1][j] == '#'&& arr[i][j - 1] == '#'&& arr[i][j + 1] == '#'){
					arr[i][j] ='.'; arr[i - 1][j] = '.' ;arr[i + 1][j] ='.'; arr[i][j - 1] ='.'; arr[i][j + 1] = '.';
				}
			}
		}
		for (int i = 0; i < n; i++){
			for (int j = 0; j < n; j++){
				if (arr[i][j] != '.')
					flag = false;
			}
		}
		if (flag)
			cout<<"YES";
		else
			cout<<"NO";
	
	return 0;
}
