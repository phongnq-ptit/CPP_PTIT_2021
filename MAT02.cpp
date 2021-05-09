#include<bits/stdc++.h>

using namespace std;

void mat02(int n){
    vector< set<int> > arr(n);
    // nhap mang 2 chieu arr
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            int value; cin>>value;
            arr[i].insert(value);
        }
    }
    // luu cac gia tri cua hang dau tien vao vector de so sanh
    vector<int> hang(arr[0].begin(), arr[0].end());
    int kq = 0;
    for(int i = 0; i < hang.size(); i++){
        int dem = 1;
        for(int j = 1; j < n; j++){
            if(arr[j].find(hang[i]) != arr[j].end()) {
                dem++;
                arr[j].erase(arr[j].find(hang[i]));
            }
        }
        if(dem == n) kq++;
    }
    cout<<kq<<endl;
}

int main(){
    int a; cin>>a;
    while(a--){
        int n; cin>>n;
        mat02(n);
    }
    return 0;
}