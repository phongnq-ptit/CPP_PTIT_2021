#include<bits/stdc++.h>

using namespace std;

int main(){
    int a; cin>>a;
    while(a--){
        int n; cin>>n;
        int arr[n], arr_check[n];
        for(int i = 0; i < n; i++){
            cin>>arr[i];
            arr_check[i] = arr[i];
        }
        sort(arr, arr + n);
        for(int i = 0; i < n; i++){
            // upper_bound trả về index đầu tiên lớn hơn arr[i] nếu không có trả về độ dài mảng
            int temp = upper_bound(arr, arr + n, arr_check[i]) - arr;
            if(temp != n) cout<<arr[temp]<<" ";
            else cout<<"_ ";
        }
        cout<<endl;
    }
    return 0;
}