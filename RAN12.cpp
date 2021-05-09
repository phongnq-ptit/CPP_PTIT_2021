#include<bits/stdc++.h>

using namespace std;

void nhapMang(int arr[], int n){
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
}

int sum(int arr[],int start,int end){
    int sum = 0;
    for(int i = start; i <= end; i++){
        sum += arr[i];
    }
    return sum;
}

bool checkDongNhat(int arr[], int length){
    int v = arr[0];
    for(int i = 0; i < length; i++){
        if(arr[i] != v) return false;
    }
    return true;
}

int main(){
    int a; cin>>a;
    while(a--){
        int n; cin>>n;
        bool check = false;
        int mang1[n], mang2[n];
        nhapMang(mang1,n);
        nhapMang(mang2,n);
        if(sum(mang1, 0, n - 1) == sum(mang2, 0, n - 1)){
            cout<<n<<endl;
            continue;
        }
        if(checkDongNhat(mang1, n) && checkDongNhat(mang2, n)){
            cout<<0<<endl;
            continue;
        }
        for(int i = n - 1; i > 0; i--){
            for(int j = 0; j < n - i + 1; j++){
                if(sum(mang1,j, j+i - 1) == sum(mang2,j,j+i - 1)){
                    cout<<i<<endl;
                    check = true; break;
                }
            }
            if(check == true) break;
        }
        check = false;
    }
    return 0;
}