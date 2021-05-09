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

string toLower(string a){
    if(a[0] >= 'a' && a[0] <= 'z') a[0] -= 32;
    for(int i = 1; i < a.length(); i++){
        if(a[i] >= 'A' && a[i] <= 'Z'){
            a[i] += 32;
        }
    }
    return a;
}

string toUpper(string a){
    for(int i = 1; i < a.length(); i++){
        if(a[i] >= 'a' && a[i] <= 'z'){
            a[i] -= 32;
        }
    }
    return a;
}

int main(){
    string n; getline(cin, n);
    vector<string> split;
    int indexFirst = 0, indexLast = 0;
    while(indexFirst < n.size()){
        indexLast = n.find(" ", indexFirst);
        if(indexFirst != indexLast) split.push_back(n.substr(indexFirst, indexLast - indexFirst));
        if(indexLast == -1) break;
        else indexFirst = indexLast + 1;
    }
    
    for(int i = 0; i < split.size(); i++){
        split[i] = toLower(split[i]);
        split[i] = trim(split[i]);
    }
    string kq = split[0];
    for(int i = 1; i < split.size() - 1; i++){
        kq += " " + split[i];
    }
    cout<<kq + ", " + toUpper(split[split.size() - 1])<<endl;
}