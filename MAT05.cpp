#include<bits/stdc++.h>

using namespace std;

int tim_max(vector<int> arr){
    int kq = 0;
    for(int i = 0; i < arr.size(); i++){
        kq = max(kq, arr[i]);
    }
    return kq;
}

void mat05(){
    int n; cin>>n;
    int arr[n][n];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++) cin>>arr[i][j];
    }
    vector<int> hang;
    for(int i = 0; i < n; i++){
        int sum = 0;
        for(int j = 0; j < n; j++){
            sum += arr[i][j];
        }
        hang.push_back(sum);
    }
    vector<int> cot; 
    for(int i = 0; i < n; i++){
        int sum = 0;
        for(int j = 0; j < n; j++){
            sum += arr[j][i];
        }
        cot.push_back(sum);
    }
    int max_hang = tim_max(hang);
    int max_cot = tim_max(cot);
    int _max = max(max_hang, max_cot);
    int count_hang = 0, count_cot = 0;
    for(int i = 0; i < hang.size(); i++){
        count_hang += (_max - hang[i]);
    }
    for(int i = 0; i < cot.size(); i++){
        count_cot += (_max - cot[i]);
    }
    cout<<min(count_cot, count_hang)<<endl;
}

int main(){
    int a; cin>>a;
    while(a--){
        mat05();
    }
    return 0;
}
/*
Ví dụ ma trận:
1    2
3    4
tổng hàng : 3   7 
tổng cột  : 4   6
Lấy max của ma trận tổng hàng tổng cột là 7 
là max tổng để các hàng các cột của ma trận đều bằng nhau (cụ thể ở đây là bằng 7)
Xét hàng 1: (3 + 4)    (7 + 0) ==> 4 + 0 = 4
Xét hàng 2: (4 + 3)    (6 + 1) ==> 3 + 1 = 4
Lấy min các giá trị vừa tìm đc ==> kq = 4
*/