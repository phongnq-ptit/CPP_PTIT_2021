#include<bits/stdc++.h>

using namespace std;

int main(){
    int a; cin>>a;
    while(a--){
        long long n; cin>>n;
        long long arr[n];
        //nhập mảng
        for(long long i = 0 ; i < n; i++){
            cin>>arr[i];
        }
        sort(arr, arr + n);// sắp xếp mảng theo thứ tự tăng dần
        int min = arr[1] - arr[0];
        // ktra xem khoảng cách của các ptu khác có nhỏ hơn min hay k, nếu nhỏ hơn thì gắn bằng min
        for(long long i = 1; i < n - 1; i++){
            if(min > (arr[i + 1] - arr[i])) min = arr[i + 1] - arr[i];
        }
        cout<<min<<endl;
    }
    return 0;
}