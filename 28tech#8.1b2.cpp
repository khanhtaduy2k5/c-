//Số nhỏ nhất chưa xuất hiện trong dãy
#include <bits/stdc++.h>
using namespace std;
int main(){
    int TC;
    cin >> TC;
    int cnt[1000002];
    while (TC--){
        int n;
        cin >> n;
        memset(cnt, 0, sizeof(cnt));
        for (int i = 0; i < n; i++){
            int x;
            cin >> x;
            if (x >0) cnt[x] = 1;
        }
        for (int i = 1; i <= 1000001; i++){
            if (cnt[i] == 0){
                cout << i << endl;
                break;
            }
        }
        cout << endl;
    }
    return 0;
}
