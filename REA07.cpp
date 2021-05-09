#include<bits/stdc++.h>

using namespace std;

// ghép 2 số lại với nhau tạo thành 1 số
int match(int a, int b){
    string temp_A = to_string(a);
    string temp_B = to_string(b); 
    temp_A += temp_B;
    int result = atoi(temp_A.c_str());
    return result;
}

bool rea7cmp(int a, int b){
    int soAB = match(a, b);
    int soBA = match(b, a); 
    if(soAB > soBA) return true;
    return false;
}

int main(){
    int a; cin>>a;
    while(a--){
        int n; cin>>n;
        int arr[n];
        for(int i = 0; i < n; i++) cin>>arr[i];
        sort(arr, arr + n, rea7cmp);
        for(int i = 0; i < n; i++) cout<<arr[i];
        cout<<endl;
    }
    return 0;
}