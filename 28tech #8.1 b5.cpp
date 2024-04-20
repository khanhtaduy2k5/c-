//dem so phan tu bi lap lai trong mang dung map
#include <bits/stdc++.h>

using namespace std;

int main(){
    int TC; cin >> TC;
    while(TC--){
        int n;cin >> n;
        int a[n];
        map<int, int> mp;
        for (int i = 0; i < n; i++){
            cin >> a[i];
            mp[a[i]]++;
    }
    int ans = 0;
    for (int i = 0; i < n; i++){
        if(mp[a[i]] >= 2) ans++;
    }
    }
    return 0;
}
