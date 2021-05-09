#include <bits/stdc++.h>
using namespace std;
int danhDau_s1[256], danhDau_s2[256];
 
string str11(string s1, string s2){
    memset(danhDau_s1, 0, sizeof(danhDau_s1));
    memset(danhDau_s2, 0, sizeof(danhDau_s2));

    int len1 = s1.length();
    int len2 = s2.length();
 
    if (len1 < len2) return "-1";
    
    //đếm các kí tự có trong s2
    for (int i = 0; i < len2; i++) danhDau_s2[s2[i]]++;
    
    int left = 0, kq_left = -1, min_len = len1;
    int dem = 0;

    for (int right = 0; right < len1; right++) {
        char c = s1[right];
        danhDau_s1[c]++;
        // kiểm tra xem có kí tự c trong s2 hay không
        // có thì tăng biến đếm lên
        if (danhDau_s1[c] <= danhDau_s2[c]) dem++;
        // nếu biến 'dem' mà bằng 'len2 thì nghĩa là 
        // đến vị trí thứ right của chuỗi s1 đã xuất hiện đầy đủ các kí tự trong chuỗi s2
        // tiếp tục các thao tác
        if (dem == len2) {
            // thu nhỏ khu vực kiểm tra
            while (danhDau_s1[s1[left]] > danhDau_s2[s1[left]] || danhDau_s2[s1[left]] == 0) {
                if (danhDau_s1[s1[left]] > danhDau_s2[s1[left]]){
                    danhDau_s1[s1[left]]--;
                }
                left++;
            }
            // cập nhât độ dài xâu con nhỏ nhất thỏa mãn
            int len_window = right - left + 1;
            if (min_len > len_window) {
                min_len = len_window;
                kq_left = left;
            }
        }
    }

    if (kq_left == -1) return "-1";

    return s1.substr(kq_left, min_len);
}

int main(){
    int a; cin>>a;
    while(a--){
        string s1, s2; cin>>s1>>s2;
        cout<<str11(s1,s2)<<endl;
    }
    return 0;
}