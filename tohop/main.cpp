#include <iostream>
using namespace std;
int gt(int n) {
    if (n == 1) return 1;
    return n * gt(n - 1);
}
int main()  {
    int n , k , tohop;
    cin >> n >> k;
    if (n == k){
        cout << "1";
    } else {
    tohop = (gt(n) / (gt(k) * gt(n - k)));
    }
    cout << tohop;

    return 0;
}
