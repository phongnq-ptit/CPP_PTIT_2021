#include<bits/stdc++.h>

using namespace std;

int main(){
    int a; cin>>a;
    while(a--){
        int n, m; cin>>n>>m;
        int arr[n][m];
        vector<int> kq;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++) cin>>arr[i][j];
        }
        int row = 0, col = 0;
        /*
        row : là chỉ số bắt đầu hàng
        n : là chỉ số kết thúc hàng
        col : là chỉ số bắt đầu cột
        m : là chỉ số kết thúc cột
        */
        // xét vùng biên của ma trận
        // mỗi lần rowét sẽ co ma trận vào
        while(row < n && col < m){
            // in hàng đầu tiên từ vị trí cột col đến m - 1
            // và tăng chỉ số row lên 1
            for(int i = col; i < m; i++) kq.push_back(arr[row][i]);
            row++;
            // in cột cuối cùng từ vị trí row đến n - 1
            // và giảm chỉ số m (giảm cột)
            for(int i = row; i < n; i++) kq.push_back(arr[i][m - 1]);
            m--;
            // in hàng cuối cùng từ vị trí m - 1 đến col
            // và giảm chỉ số n (giảm hàng)
            if(row < n){
                for(int i = m - 1; i >= col; i--) kq.push_back(arr[n - 1][i]);
                n--;
            }
            // in các cột đầu tiên từ vị trí n - 1 đến row
            // và tăng chỉ số col lên 1
            if(col < m){
                for(int i = n - 1; i >= row; i--) kq.push_back(arr[i][col]);
                col++;
            }
        }
        for(int i = kq.size() - 1; i >= 0; i--){
            cout<<kq[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}