#include<bits/stdc++.h>

using namespace std;

int main(){
    int a; cin>>a;
    while(a--){
        int n, m; cin>>n>>m;
        int arr[n][m];
        int danhDau[n][m] = {0};
        // nhập mảng 2 chiều
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                cin>>arr[i][j];
            }
        }
        // đánh dấu các số 1 xuất hiện liền kề theo cột
        int x = 1;
        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                x = (arr[j][i] == 0) ? 0 : x++;
                danhDau[j][i] = x++;
            }
            x = 1;
        }
        // sắp xếp các phần tử ở mỗi hàng theo thứ tự giảm dần
        for(int i = 0; i < n; i++) 
            sort(danhDau[i], danhDau[i] + m, greater<int>());
        // tìm ra diện tích lớn nhất
        int kq = INT32_MIN;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                int temp = (j + 1) * danhDau[i][j];
                if(kq < temp) kq = temp;
            }
        }
        cout<<kq<<endl;
    }
    return 0;
}
/*
ví dụ : mảng 2 chiều [3][5]
    0 1 0 1 0
    0 1 0 1 1
    1 1 0 1 0

bước 1: đánh dấu các số 1 xuất hiện liền kề theo cột vào mảng trung gian
    0 1 0 1 0
    0 2 0 2 1
    1 3 0 3 0

bước 2: sắp xếp các phần tử ở mỗi hàng theo thứ tự giảm dần
    1 1 0 0 0
    2 2 1 0 0
    3 3 1 0 0

bước 3: tìm diện tích lớn nhất bằng cách 
    DUYỆT CÁC HÀNG CỦA MẢNG 2 CHIỀU TRUNG GIAN
    NHÂN SỐ CỘT VỚI GIÁ TRỊ [i][j]
*/