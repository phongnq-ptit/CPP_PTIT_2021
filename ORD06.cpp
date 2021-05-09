#include<bits/stdc++.h>

using namespace std;

void ord06(long arr[], long n){
    long kq = -1;
    long _min[n], _max[n];
    _min[0] = arr[0]; _max[n - 1] = arr[n - 1];
    // tìm ra mảng min giảm dần từ trái qua
    for(long i = 1; i < n; i++){
        _min[i] = min(_min[i - 1], arr[i]);
    }
    // tìm ra mảng max tăng dần từ phải qua
    for(long i = n - 2; i >= 0; i--){
        _max[i] = max(_max[i + 1], arr[i]);
    }
    int value;
    // tìm ra khoảng cách lớn nhất
    for(long i = 0, j = 0; i < n && j < n;){
        if(_min[i] <= _max[j]) {
            value = j - i;
            j++;
        }
        else i++;
        if(kq < value) kq = value;
    }
    cout<<kq<<endl;
}

int main(){
    int a; cin>>a;
    while(a--){
        long n; cin>>n;
        long arr[n];
        for(long i = 0; i < n; i++) cin>>arr[i];
        ord06(arr, n);
    }
    return 0;
}
/*
ví dụ:
arr				34 8  10 3  2  80 30 33 1
min from left	34 8  8  3  2  2  2  2  1
max from right	80 80 80 80 80 80 33 33 1

min[i] <= max[j] j++
else i++
*/