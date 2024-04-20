#include <bits/stdc++.h>
using namespace std;
int ucln(int a, int b){
    if (b == 0) return a;
    return ucln(b, a % b);
}
struct PhanSo{
    int tu,mau;
}
PhanSo congps(PhanSo &a, PhanSo &b){
    PhanSo tong;
    tong.tu = a.tu * b.mau + b.tu * a.mau;
    tong.mau = a.mau * b.mau;
}
PhanSo rutgon(Phan so &x){
    x.tu = x.tu / ucln(x.tu, x.mau);
    x.mau = x.mau / ucln(x.tu, x.mau)
}
int main() {
    PhanSo ps;

}
