#include<bits/stdc++.h>

using namespace std;

void ran07(int arr[], int n, int x){
    bool check = true;
    int min_len = n + 1, sum = 0;
    int left = 0, right = 0;
    while(right < n){
        // nếu vòng lặp này kết thúc thì có nghĩa là
        // đến vị trí thứ right thì tổng các phần tử đã lớn hơn x
        while(sum <= x && right < n){
            sum += arr[right];
            right++;
        }
        // lúc này ta thu nhỏ lại vùng kiểm tra
        // và tìm xem độ dài nào nhỏ nhất nhưng tổng vẫn lớn hơn x
        while(sum > x && left < n){
            check = false;
            if((right - left) < min_len){
                min_len = right - left;
            }
            sum -= arr[left];
            left++;
        }
    }
    if(check) cout<<-1<<endl;
    else cout<<min_len<<endl;
}

int main(){
    int a; cin>>a; 
    while(a--){
        int n, x; cin>>n>>x;
        int arr[n];
        for(int i = 0; i < n; i++) cin>>arr[i];
        ran07(arr, n, x);
    }
    return 0;
}