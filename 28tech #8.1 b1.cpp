/*Sắp xếp lại các phần tử của mảng a[] sao cho a[i] = i;
Nếu a[j] != j thì in ra -1 */
#include <bits/stdc++.h>
using namespace std;

int main(){
    int TC; cin >> TC;
    while (TC--)    {
        int n;
        cin >> n;
        map <long long, bool> mp;
        for (int i = 0; i < n ;i++){
                long long x;
                cin >> x;
                mp[x] = true;
        }
        for (int i = 0; i <n; i++){
            if (mp[i]){
                cout << i << " ";
            }
            else cout << "-1";
        }
        cout << endl;
    }
    return 0;
}


