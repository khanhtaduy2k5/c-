#include <bits/stdc++.h>
#define filein() freopen("test.inp", "r", stdin);
#define fileout() freopen("test.out", "w", stdout);
#define fast() ios_base::sync_with_stdio(NULL);cout.tie(NULL);cin.tie(NULL);
#define ll long long
#define MOD 1000000007
#define N 100000
using namespace std;

struct point{

        int x, y;
};

struct doanThang{

        point start, end;
};

struct dgGapKhuc{

        int cnt = 0;
        doanThang t[106];
};

bool giaoNhau(doanThang a, doanThang b){

}

double length(doanThang a){
    double m = (a.start.x - a.end.x) * (a.start.x - a.end.x);
    double n = (a.start.y - a.end.y) * (a.start.y - a.end.y);
    double res = sqrt(m+n);
    return res;
}

bool lienTuc(dgGapKhuc a){
    for(int i = 0; i < a.cnt-1; i++){
        if(a.t[i].end.x != a.t[i+1].start.x)
            return false;
        if(a.t[i].end.y != a.t[i+1].start.y)
            return false;
    }
    return true;
}

bool operator < (doanThang a, doanThang b){
    return length(a) < length(b);
}

bool operator > (doanThang a, doanThang b){
    return length(a) > length(b);
}

doanThang operator + (point a, point b){
    doanThang c;
    if(a.x < b.x){
        c.start.x = a.x;
        c.start.y = a.y;
        c.end.x = b.x;
        c.end.y = b.y;
    }
    else if(a.x > b.x){
        c.start.x = b.x;
        c.start.y = b.y;
        c.end.x = a.x;
        c.end.y = a.y;
    }
    else if(a.y < b.y){
        c.start.x = a.x;
        c.start.y = a.y;
        c.end.x = b.x;
        c.end.y = b.y;
    }
    else if(a.y >= b.y){
        c.start.x = b.x;
        c.start.y = b.y;
        c.end.x = a.x;
        c.end.y = a.y;
    }
    return c;
}

dgGapKhuc operator + (doanThang a, point b){
    dgGapKhuc c;
    c.t[0].start.x = a.start.x;
    c.t[0].start.y = a.start.y;
    c.t[0].end.x = a.end.x;
    c.t[0].end.y = a.end.y;
    c.t[1].start.x = a.end.x;
    c.t[1].start.y = a.end.y;
    c.t[1].end.x = b.x;
    c.t[1].end.y = b.y;
    return c;
}

dgGapKhuc operator - (dgGapKhuc &a, int b){
    if(b >= 0){
        for(int i = b; i < a.cnt; i++){
            a.t[i].start.x = a.t[i+1].start.x;
            a.t[i].start.y = a.t[i+1].start.y;
            a.t[i].end.x = a.t[i+1].end.x;
            a.t[i].end.y = a.t[i+1].end.y;
        }
        a.cnt--;
    }
    else if(b < 0){
        for(int i = a.cnt+b; i < a.cnt; i++){
            a.t[i].start.x = a.t[i+1].start.x;
            a.t[i].start.y = a.t[i+1].start.y;
            a.t[i].end.x = a.t[i+1].end.x;
            a.t[i].end.y = a.t[i+1].end.y;
        }
        a.cnt--;
    }
}

void solve(){
    ifstream in("input.txt");
    int n; in >> n;
    point a[1000];
    doanThang b[1000];
    dgGapKhuc c[1000];
    int cnt1 = 0;
    int cnt2 = 0;
    int cnt3 = 0;
    for(int i = 0; i < n; i++){
        int k; in >> k;
        if(k == 1){
            in >> a[cnt1].x >> a[cnt2].y;
            cnt1++;
        }
        else if(k == 2){
            in >> b[cnt2].start.x >> b[cnt2].start.y >> b[cnt2].end.x >> b[cnt2].end.y;
            cnt2++;
        }
        else if(k == 3){
            in >> c[cnt3].cnt;
            for(int j = 0; j < c[cnt3].cnt; j++){
                in >> c[cnt3].t[j].start.x >> c[cnt3].t[j].start.y >> c[cnt3].t[j].end.x >> c[cnt3].t[j].end.y;
                c[cnt3].cnt++;
            }
            cnt3++;
        }
    }
}

int main(){
    fast();
    filein(); fileout();
    int t; cin >> t;
    while(t--)
        solve();
    return 0;
}
