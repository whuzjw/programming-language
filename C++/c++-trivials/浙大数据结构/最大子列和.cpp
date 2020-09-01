#include<iostream>
using namespace std;
int main(){
    int K;
    cin>>K;
    int a[K];
    for(int i =0;i<K;i++){
        cin>>a[i];
    }
    long long max = 0;
    long long x = 0;
    for(int i = 0;i<K;i++){
        x += a[i];
        if(x < 0) x = 0;
        if(x > max) max = x;
    }
    cout<<max;
}


#include<iostream>
using namespace std;
int main() {
    int K;
    cin >> K;
    int a[K];
    for (int i = 0; i < K; i++) {
        cin >> a[i];
    }
    long long max = 0;
    long long x = 0;
    int start_index = 0;        // 用下标往往更爽
    int real_start_index = 0;
    int real_end_index = 0;
    bool zero = false;
    for (int i = 0; i < K; i++) {
        x += a[i];
        if (a[i] == 0) zero = true;
        if (x < 0) {
            x = 0;
            if (i < K - 1) start_index = i + 1;
        }
        if (x > max) {
            max = x;
            real_start_index = start_index;
            real_end_index = i;
        }
    }
    if (max == 0 && !zero) real_end_index = K - 1;   // 全为负数的max==0
    if (max == 0 && zero) {           // 有0的max==0
        cout << 0 << " " << 0 << " " << 0;
        return 0;
    }
    cout << max << " " << a[real_start_index] << " " << a[real_end_index];
    return 0;
}