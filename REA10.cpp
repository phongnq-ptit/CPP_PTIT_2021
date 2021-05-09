#include<bits/stdc++.h>

using namespace std;

void ran10(string n){
    // mặc định kết thúc chuỗi là chữ 'I'
    n = n + "I";
    int first = 2, last = 1;
    stack<int> temp;
    for(int i = 0; i < n.length(); i++){
        // nếu n[i] = 'D' thì push biết first vào stack
        // push xong thì tăng giá trị first lên 1
        if(n[i] == 'D'){
            temp.push(first);
            first++;
        }
        // nếu n[i] = 'I' thì in các phần tử trong stack từ cuối đến hết
        // in các ptu trong stack rồi in last và gán lại last = first
        // xong thì tăng giá trị first lên 1
        if(n[i] == 'I'){
            while(!temp.empty()){
                cout<<temp.top();
                temp.pop();
            }
            cout<<last;
            last = first;
            first++;
        }
    }
    // while này để in ra các ptu còn trong stack còn lại cho đến khi rõng
    while(!temp.empty()){
        cout<<temp.top();
        temp.pop();
    }
    cout<<endl;
}

int main(){
    int a; cin>>a;
    while(a--){
        string n; cin>>n;
        ran10(n);
    }
    return 0;
}