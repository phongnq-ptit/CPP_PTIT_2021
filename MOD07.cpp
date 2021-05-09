#include<bits/stdc++.h>

using namespace std;

void mod07(int arr[], int n){
    sort(arr, arr + n); // sắp xếp các phần tử của mảng tăng dần
    vector<int> temp;
    int value = arr[n - 1] - arr[0];
    // tìm ra các ước của value rồi lưu trong vector 
    for(int i = 1; i <= sqrt(value); i++){
        if(value%i == 0){
            temp.push_back(i);
            if(i != value/i) temp.push_back(value/i);
        }
    }
    // thực hiện kiểm tra
    // nếu tất cả các phần tử của arr đều % cho temp[i] ra 1 kết quả
    // thì biến kq++;
    int kq = 0;
    for(int i = 0; i < temp.size(); i++){
        int x = arr[0] % temp[i];
        int j;
        for(j = 1; j < n; j++){
            if(arr[j] % temp[i] != x) break;
        }
        if(j == n) kq++;
    }
    cout<<kq<<endl;
}

int main(){
    int a; cin>>a;
    while(a--){
        int n; cin>>n;
        int arr[n];
        for(int i = 0; i < n; i++) cin>>arr[i];
        mod07(arr, n);
    }
    return 0;
}