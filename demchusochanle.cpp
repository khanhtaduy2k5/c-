#include <bits/stdc++.h>
using namespace std;
void dcs(int n)  {
    int chan =0;
    int le = 0;
    while (n >0)    {
        int res = n % 10;
        if (res % 2 == 0) chan++;
        else le++;
        n /= 10;
    }
    cout << chan << " " << le;
}
int main()  {
    int t;
    cin >> t;
    int a[t];
    for (int i = 0; i < t; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < t; i++) {
         dcs(a[i]);
         cout << endl;
    }
    return 0;
}
