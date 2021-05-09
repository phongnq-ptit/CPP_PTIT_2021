#include<bits/stdc++.h>

using namespace std;
// Phương trình đồng dư (x*x%p) = 1
int main(){
    long long a; cin>>a;
    while(a--){
        long long b, p, kq = 0;
        cin>>b>>p;
        for(long long i = 1; i <= p; i++){
            if(i*i%p==1){
                // số xa nhất có thể 
                long long temp = i + (b/p)*p;
                // nếu temp vượt quá giới hạn b thì trừ đi p
                if(temp > b) temp -= p;
                // số điểm trong khoảng (có n đoạn thì có n + 1 điểm)
                kq += ((temp-i)/p) + 1;
            }
        }
        cout<<kq<<endl;
    }
    return 0;
}