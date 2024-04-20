#include <bits/stdc++.h>
using namespace std;
int nt(int n)   {
    if (n < 2) return false;
    for (int i = 2; i <= sqrt(n); i++)  {
        if (n % i == 0) return false;
    }
    return true;
}
int dem(int n)  {
    int count = 0;
    while (n > 0)   {
        int res;
        res = n % 10;
        if(nt(res)) count++;
        n /= 10;
    }
    return count;
}
int main()  {
    int t;
    cin >> t;
    int a[t];
    for (int i = 0; i < t; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < t; i++) {
        cout << dem(a[i]) << endl;
    }
    return 0;
}
