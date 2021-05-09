#include<bits/stdc++.h>

using namespace std;
// lưu độ dài dãy con tăng
vector<int> day_con_tang(int arr[], int n, int left, int right){
    vector<int> kq(n,1); // khai báo mảng kq có n phần từ có giá trị bằng 1
    if(left > right){
        reverse(arr, arr + n); // đảo ngược mảng
        swap(left, right); // đổi giá trị cho nhau
    }
    // quy hoạch động tìm dãy con tăng 
    for(int i = left; i < right; i++){
        for(int j = left; j < i; j++){
            if(arr[i] > arr[j] && kq[i] < kq[j] + 1){
                kq[i] = kq[j] + 1;
            }
        }
    }
    return kq;
}

void rea11(int arr[], int n){
    // dãy con tăng từ trái qua phải
    vector<int> toLeft; toLeft = day_con_tang(arr, n, 0, n);
    // dãy con tăng từ phải qua trái
    vector<int> toRight; toRight = day_con_tang(arr, n, n, 0); 
    reverse(toRight.begin(), toRight.end());
    int max_len = 0;
    for(int i = 0; i < n; i++){
        max_len = max(max_len, toLeft[i] + toRight[i] - 1);
    }
    cout<<max_len<<endl;
}

int main(){
    int a; cin>>a;
    while(a--){
        int n; cin>>n;
        int arr[n];
        for(int i = 0; i < n; i++) cin>>arr[i];
        rea11(arr, n);
    }
    return 0;
}