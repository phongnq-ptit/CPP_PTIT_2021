#include<bits/stdc++.h>

using namespace std;

// tach tu trong chuoi
set<string> split(string a){
    vector<string> trungGian;
    int index1 = 0, index2 = 0;
    while(index1 <= a.length()){
        index2 = a.find(" ",index1);
        if(index1 != index2) trungGian.push_back(a.substr(index1, index2 - index1));
        if(index2 == -1) break;
        else index1 = index2 + 1;
    }
    set<string> kq(trungGian.begin(), trungGian.end());
    return kq;
}

int main(){
    int a; cin>>a; cin.ignore();
    while(a--){
        string n1, n2; 
        getline(cin, n1); getline(cin, n2);
        set<string> one_words; one_words = split(n1);
        set<string> two_words; two_words = split(n2);
        for(set<string>::iterator i = one_words.begin(); i != one_words.end(); i++){
            if(two_words.find(*i) == two_words.end()){
                cout<<*i<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}