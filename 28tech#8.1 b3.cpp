/*cho mảng a[] gồm n số chưa sắp xếp.
tìm min(a[i] - a[j]) với i != j
i, j = 0,1,2,...,n-1*/
#include <bits/stdc++.h>
using namespace std;
int main(){
    int TC;
    cin >> TC;
    while (TC--){
    int n; cin >> n;
    int a[n];
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    sort(a, a + n);
    int res = INT_MAX;
    for (int i = 1; i < n; i++){
        res = min(res, a[i] - a[i - 1]);
    }
    cout << res << endl;
    }
    return 0;
}
