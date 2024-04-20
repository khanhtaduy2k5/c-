
#include <bits/stdc++.h>
using namespace std;
int gcd(int a, int b){
    if (b == 0) return a;
    return gcd(b, a % b);
}
int main(){
    const int maxn = 1000000;
    int a[maxn], n;
    int t; cin >> t;
    while (t--){
        int n;
        cin >> n;
        for (int i = 0; i < n; i++) cin >> a[i];
    }
    int res = 0;
    for (int i = 0; i < n; i++){
        res = gcd(res, a[i]);
    }
    if (res == 1){
        cout << "0" << endl;continue;
    }
    int ans = 1;
    for (int i = 2; i < sqrt(res); i++){
        if (n % i == 0){
            ++ans;
            if (i != n / i) ++ans;
        }
    }
    cout << ans << endl;
    return 0;
}
