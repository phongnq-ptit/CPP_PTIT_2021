#include<bits/stdc++.h>

using namespace std;

string trim(string n){
    string kq = "";
    int indexFirst = -1, indexLast = -1;
    for(int i = 0; i < n.length(); i++){
        if(indexFirst == -1 && n[i] != ' '){
            indexFirst = i;
        }
        if(n[i] != ' '){
            indexLast = i;
        }
    }
    if(indexFirst == -1) return "";
    for (int i = indexFirst; i <= indexLast; i++){
        kq += n[i];
    }
    return kq;
}

int seach(string a, string b){
    int index = 1;
    int start = -1;
    for(int i = 0; i < a.length() - b.length() + 1; i++){
        index = 1;
        for(int j = 0; j < b.length(); j++){
            if(b[j] != a[j + i]){
                index = 0; break;
            }
        }
        if(index == 1){
            start = i;
            break;
        }
    }
    return start;
}

int main(){
    string str1; getline(cin, str1); 
    string str2; getline(cin, str2); 
    while(true){
        int index = seach(str1,str2); // tìm xem str2 ở đâu trong str1, nếu k tìm thấy hàm find sẽ trả về -1
        if(index != -1) {
            str1.erase(index, str2.length()); 
            str1 = trim(str1);
        }
        // erase() xoa chuoi tu ptu (index -1) với (str2.length + 2) đơn vị
        else break; 
    }
    cout<<str1<<endl;
    return 0;
}
