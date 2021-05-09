#include <bits/stdc++.h>
using namespace std;
int danhDau_s1[256], danhDau_s2[256];
 
int str11(string s1, set<char> s2){
    memset(danhDau_s1, 0, sizeof(danhDau_s1));
    memset(danhDau_s2, 0, sizeof(danhDau_s2));

    int len1 = s1.length();
    int len2 = s2.size();
 
    if (len1 < len2) return -1;
    
    //đếm các kí tự có trong s2
    for (set<char>::iterator i = s2.begin(); i != s2.end(); i++) danhDau_s2[*i]++;
    
    int left = 0, min_len = len1;
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
            }
        }
    }

    return min_len;
}

int main(){
    int a; cin>>a;
    while(a--){
        string s1; cin>>s1;
        set<char> s2;
        for(int i = 0; i < s1.length(); i++){
            s2.insert(s1[i]);
        }
        cout<<str11(s1,s2)<<endl;
    }
    return 0;
}