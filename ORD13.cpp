#include<bits/stdc++.h>

using namespace std;
// nhập mảng
void nhap_mang(int arr[], int n){
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
}
// tính lần lượt các tổng từ trái qua phải
deque<int> tong_trai(int arr[], int n){
    deque<int> kq(n, 0);
    int sum = 0;
    for(int i = 0; i < n; i++){
        sum += arr[i];
        kq[i] = sum;
    }
    return kq;
}
// tính các tổng lần lượt từ phải qua trái
deque<int> tong_phai(int arr[], int n){
    deque<int> kq(n);
    int sum = 0;
    for(int i = n - 1; i >= 0; i--){
        sum += arr[i];
        kq.push_front(sum);
    }
    return kq;
}

void ord13(int a[], int b[], int n, int m){
    deque<int> la(n); la = tong_trai(a, n);
    deque<int> ra(n); ra = tong_phai(a, n);
    deque<int> lb(m); lb = tong_trai(b, m);
    deque<int> rb(m); rb = tong_phai(b, m);
    int kq = max(ra[0], rb[0]);
    for(int i = 0, j = i + 1; i < n && j < m; i++, j++){
        kq = max(kq, la[i] + rb[j]);
    }
    for(int i = 0, j = i + 1; i < m && j < n; i++, j++){
        kq = max(kq, lb[i] + ra[j]);
    }
    cout<<kq<<endl;
}

int main(){
    int a; cin>>a;
    while(a--){
        int n, m; cin>>n>>m;
        int a[n], b[m];
        nhap_mang(a, n); nhap_mang(b, m);
        ord13(a, b, n, m);
    }
    return 0;
}
/*
VÍ DỤ :
mảng A         :  2   3   7   10  12      |      mảng B         :  1   5   7   8
tổng trái (la) :  2   5  12   22  34      |      tổng trái (lb) :  1   6  13  21
tổng phải (ra) : 34  32  29   22  12      |      tổng phải (rb) : 21  20  15   8

int kq = max(ra[0], rb[0]) = (34, 21) = 34;

tiếp tục so sánh :
+ kq = max(kq, la[i] + rb[i + 1]) :

la[0] + rb[1] = 22 ==> kq = 34
la[1] + rb[2] = 20 ==> kq = 34
la[2] + rb[3] = 20 ==> kq = 34

+ kq = max(kq, lb[i] + ra[i + 1]) :

lb[0] + ra[1] = 33 ==> kq = 34
lb[1] + ra[2] = 35 ==> kq = 35
lb[2] + ra[3] = 35 ==> kq = 35
lb[3] + ra[4] = 33 ==> kq = 35

Vậy đáp án của đề bài là : 35
*/ 