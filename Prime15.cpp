#include<bits/stdc++.h>

using namespace std;
vector<long long> arr;
bool ktraSoNT(long long n){
    if(n < 2) return false;
    if(n==2) return true;
    if(n%2==0) return false;
    for(long long i = 3; i <= sqrt(n); i += 2){
        if(n%i == 0) return false;
    }
    return true;
}

void phanTichThuaSo(long long n){
    for(long long i = 2; i <= n; i++){
        while(n%i==0){
            arr.push_back(i);
            n/=i;
        }
    }
    cout<<arr[0]<<" ";
    arr.clear();
}

int main(){
    int a; cin>>a;
    while(a--){
        long long n; cin>>n;
        cout<<"1 ";
        for(long long i = 2; i <= n; i++){
            if(ktraSoNT(i)){
                cout<<i<<" "; continue;
            }
            if(i%2==0){
                cout<<"2 "; continue;
            }
            if(i%3==0){
                cout<<"3"<<" "; continue;
            }
            if(i%5==0){
                cout<<"5"<<" "; continue;
            }
            if(i%7==0){
                cout<<"7"<<" "; continue;
            }
            phanTichThuaSo(i);
        }
        cout<<endl;
    }
    return 0;
}
