#include<bits/stdc++.h>

using namespace std;

// với x^y > y^x --> y > x
// function dem() xử lí thêm các trường hợp đặc biệt
int dem(int y[], int m, int danhDau[6], int x){
    // với x = 0 thì với mọi y đều x^y <= y^x
    if(x == 0) return 0;
    // với x = 1, y = 0 thì thỏa mãn x^y > y^x
    if(x == 1) return danhDau[0];
    // tìm ra vị trí số nhỏ nhất trong mảng y nhưng lớn hơn x
    int temp = upper_bound(y, y + m, x) - y;
    int kq = m - temp; // có bao nhiêu số trong mảng y mà > x thì đều thỏa mãn
    // đến trường hợp này thì đã đi qua trường hợp x = 1 hoặc x = 0
    // -> x > 2 mà với mọi x > 2, y = 0 hoặc y = 1 thì đều thỏa mã điều kiện x^y > y^x
    kq += (danhDau[0] + danhDau[1]); 
    // trường hợp x = 2, y = 2 hoặc y = 3 thì x^y <= y^x
    if(x == 2) kq -= (danhDau[3] + danhDau[4]);
    // x = 3, y = 2 thỏa mãn điều kiện x^y > y^x
    if(x == 3) kq += danhDau[2];
    return kq;
}

void sort08(int x[], int y[], int danhDau[6], int n, int m){
    sort(y, y + m); // sắp xếp mảng y để sử dụng hàm upper_bound() tối ưu nhất
    int kq = 0;
    for(int i = 0; i < n; i++){
        kq += dem(y, m, danhDau, x[i]);
    }
    cout<<kq<<endl;
}

int main(){
    int a; cin>>a;
    while(a--){
        int n, m; cin>>n>>m;
        int x[n], y[m], danhDau[6] = {0};
        for(int i = 0; i < n; i++) cin>>x[i];
        for(int i = 0; i < m; i++){
            cin>>y[i];
            if(y[i] < 5) danhDau[y[i]]++;
        }
        sort08(x, y, danhDau, n, m);
    }
    return 0;
}