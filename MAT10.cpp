#include<bits/stdc++.h>

using namespace std;

int main(){
    int a; cin>>a;
    while(a--){
        int n,m; cin>>n>>m;
        int arr[n][m], arr_kq[n][m];
        // nhap mang
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                cin>>arr[i][j];
                arr_kq[i][j] = arr[i][j];
            }
        }
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(arr[i][j] == 1){
                    for(int j2 = 0; j2 < m ; j2++){
                        arr_kq[i][j2] = 1;
                    }
                    for(int i2 = 0; i2 < n ; i2++){
                        arr_kq[i2][j] = 1;
                    }
                }
            }
        }
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                cout<<arr_kq[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}