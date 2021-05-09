#include<bits/stdc++.h>

using namespace std;

int main(){
    int a; cin>>a;
    while(a--){
        int n, m; cin>>n>>m;
        int arr[n][m];
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++) cin>>arr[i][j];
        }
        int i = 0, j = 0;
        // check = true thì hướng lên trên
        // check = false thì hướng xuống dưới
        bool check = true;
        int k = 0;
        while(k < n * m){
            if(check){
                for(; i >= 0 && j < m; i--, j++){
                    cout<<arr[i][j]<<" ";
                    k++;
                }
                if(i < 0 && j < m) i = 0;
                if(j == m){
                    i += 2;
                    j--;
                }
            } else{
                for(; j >= 0 && i < n; i++, j--){
                    cout<<arr[i][j]<<" ";
                    k++;
                }
                if(j < 0 && i < n) j = 0;
                if(i == n){
                    j += 2;
                    i--;
                }
            }
            check = !check;
        }
        cout<<endl;
    }
    return 0;
}