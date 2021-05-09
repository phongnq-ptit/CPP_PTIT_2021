#include<bits/stdc++.h>

using namespace std;
/*
Ví dụ nhân 2 số 1234 * 789
- ta lấy số 9*1, 9*2, 9*3, 9*4 : 0  0   9   18  27  36
- ta lấy số 8*1, 8*2, 8*3, 8*4 : 0  8   16  24  32  0
- ta lấy số 9*1, 9*2, 9*3, 9*4 : 7  14  21  28  0   0
-   tính tổng                  : 7  22  46  70  59  36
-   kết quả                    : 9  7   3   6   2   6
*/
void tich_2_so(string a, string b){
    int lena = a.size(), lenb = b.size();
    int *tong_cac_cot = new int[lena + lenb];
    for(int i = 0; i < lena + lenb; i++) tong_cac_cot[i] = 0;
    // thực hiện nhân giống mẫu giáo
    for(int i = 0; i < lenb; i++){
        for(int j = 0; j < lena; j++){
            tong_cac_cot[j+i] += (b[i] - '0') * (a[j] - '0');
        }
    }
    // cũng tính toán như mẫu giáo luôn
    deque<int> ket_qua;
    int nho = 0;
    for(int i = lena + lenb - 2; i >= 0; i--){
        int value = tong_cac_cot[i] + nho;
        if(value >= 10){
            if(i == 0){
                ket_qua.push_front(value%10);
                ket_qua.push_front(value/10);
            } else{
                ket_qua.push_front(value%10);
                nho = value/10;
            }
        } else{
            ket_qua.push_front(value);
            nho = 0;
        }
    }
    // in ra dáp án
    for(int i = 0; i < ket_qua.size(); i++){
        cout<<ket_qua[i];
    }
    cout<<endl;
}

int main(){
    int a; cin>>a;
    while(a--){
        string a, b; cin>>a>>b;
        tich_2_so(a, b);
    }
    return 0;
}
