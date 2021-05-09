#include<bits/stdc++.h>
// PHUONG PHAP DANH DAU MANG
using namespace std;
long long arr[1000000];
int main(){
    int a; cin>>a;
    while(a--){
        long long n,k; cin>>n>>k;
        memset(arr,0,sizeof(arr)); // gan tat ca cac ptu cua mang arr bang 0
        // nhap cac ptu cua mang va danh dau so lan xuat hien cua chung vao mang arr
        for(long long i = 0; i < n; i++){
            long long value; cin>>value;
            arr[value - 1]++;
        }
        long long kq = -1;
        if(arr[k - 1] != 0) kq = arr[k - 1];
        cout<<kq<<endl;
    }
    return 0;
}