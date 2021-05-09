#include<bits/stdc++.h>

using namespace std;

int main(){
    int a; cin>>a;
    while(a--){
        int n; cin>>n;
        int arr[n], arr_fake[n];
        for(int i = 0; i < n; i++){
            cin>>arr[i];
            arr_fake[i] = arr[i];
        }
        sort(arr_fake, arr_fake + n);
        if(n==1) {cout<<arr[0]<<endl; continue;}
        long long tich = 1;
        long long max = arr_fake[0] - 1;
        // duyet do dai day con
        for(long long i = 1; i <= n; i++){
            // duyet cac day con
            for(long long j = 0; j < n - i + 1; j++){
                // tim tich va duyet day con
                tich = 1;
                for(long long k = j; k < j + i; k++){
                    tich *= arr[k];
                    if(tich > max) max = tich;
                }
            }
        }
        cout<<max<<endl;
    }
    return 0;
}