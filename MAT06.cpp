#include<bits/stdc++.h>

using namespace std;

int main(){
    int a; cin>>a;
    while(a--){
        int n; cin>>n;
        int arr[n][n];
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                cin>>arr[i][j];
            }
        }
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                if(i == 0 || j == 0 || i == n - 1 || j == n - 1){
                    cout<<arr[i][j];
                } else cout<<" ";
                cout<<" ";
            }
            cout<<endl;
        }
        cout<<endl;
    }
}