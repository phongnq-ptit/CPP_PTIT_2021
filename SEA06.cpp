#include<bits/stdc++.h>

using namespace std;

int main(){
    int a; cin>>a;
    while(a--){
        long long n; cin>>n;
        long long arr[n];
        // nhap mang arr
        for(long long i = 0; i < n; i++){
            cin>>arr[i];
        }
        // duyet trau =))))
        long long min = arr[0] + arr[1];
        long long dem = 0;
        for(long long i = 0; i < n; i++){
            for(long long j = 0; j < n; j++){
                if(i != j ){
                    long long value = arr[i] + arr[j];
                    if(abs(value) < abs(min)){
                        min = value;
                    }
                }
            }
        }
        cout<<min<<endl;
    }
    return 0;
}
