#include <bits/stdc++.h>
using namespace std;
int tcs(int n)  {
    int sum = 0;
    while (n > 0)  {
    int res = n % 10;
    sum += res;
    n /= 10;
    }
    return sum;
}
int main()  {
    int t;
    cin >> t;
    int a[t];
    for (int i = 0; i < t; i++)    {
        cin >> a[i] ;
        cout << tcs(a[i]) << endl;
    }
    return 0;
}
