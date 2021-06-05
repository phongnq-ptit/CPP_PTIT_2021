#include<bits/stdc++.h>

using namespace std;

int ran05(int arr[], int n){
    if(arr[0] == 0) return -1;
    if(n <= 1) return 0;

    int kq = 1; // số lần nhảy để đi hết mảng
    int index_max = arr[0]; // chỉ số có thể truy cập tối đa trong mảng
    int temp = arr[0]; // số bước VẪN CÓ THỂ thực hiện được

    for(int i = 1; i < n; i++){

        if(i == n - 1) return kq;

        index_max = max(index_max, arr[i] + i);
        temp--;
        if(temp == 0){
            kq++;

            if(i >= index_max) return -1;

            temp = index_max - i;
        }
    }

    return -1;
}

int main(){
    int a; cin>>a;
    while(a--){
        int n; cin>>n;
        int arr[n];
        for(int i = 0; i < n; i++){
            cin>>arr[i];
        }
        cout<<ran05(arr, n)<<endl;
    }
    return 0;
}