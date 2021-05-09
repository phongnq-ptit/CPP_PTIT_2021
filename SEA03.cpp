#include<bits/stdc++.h>

using namespace std;

int main(){
    int a; cin>>a;
    while(a--){
        long long n; cin>>n;
        long long arr[n - 1];
        vector<long long> arr1;
        // nhap mang va gan cac gia tri duong tu mang arr sang vector<> arr1
        for(long long i = 0; i < n - 1; i++){
            cin>>arr[i];
            if(arr[i] > 0) arr1.push_back(arr[i]);
        }
        long long kq = 1;
        // gan cac gia tri tu vector<> arr1 sang set<> arr2
        set<long long> arr2(arr1.begin(), arr1.end());
        // neu vector<> arr1 rong -> mang arr deu la so am 
        //-> so nguyen duong nho nhat khong co trong mang la 1
        if(arr1.empty()) cout<<kq<<endl;
        else{
            while(true){
                // ktra xem 1 co trong mang hay khong, neu khong co thi in ra, neu co thi tang len 1 don vi
                // khi nao thoa man khong thay 'kq' trong mang thi dung vong lap 
                if(arr2.find(kq) == arr2.end()){
                    cout<<kq<<endl;
                    break;
                } else kq++;
            }
        }
    }
    return 0;
}