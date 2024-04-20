#include <bits/stdc++.h>
using namespace std;
struct sv   {
    string ma, ten, lop, ns;
    double gpa;
};
void in(sv &a)   {
    cout << "Ma sinh vien: " << a.ma << endl;
    cout << "Ten sinh vien: " << a.ten << endl;
    cout << "Lop: " << a.lop << endl;
    cout << "Ngay sinh: " << a.ns << endl;
    cout << "GPA: " << fixed << setprecision(2) << a.gpa << endl;
}
void nhap (sv &a)   {
    cout << "Nhap ma sinh vien: " ; cin >> a.ma;
    cout << "Nhap ten sinh vien: "; cin >> a.ten;
    cin.ignore();
    getline(cin, a.ten);
    cout << "Nhap lop: "; cin >> a.lop;
    cout << "Nhap ngay sinh: "; cin >> a.ns;
    cout << "GPA: "; cin >> a.gpa;
}

void inds(sv a[], int n) {
    cout << "Thong tin danh sach sinh vien:\n";
    for (int i = 0; i < n ; i++)    {
        in(a[i]);
    }
}
void tkma(sv a[], int n) {
        string ma;
        cout << "Nhap ma sinh vien can tim:"; cin >> ma;
        bool found = false;
        for (int i = 0; i < n; i++) {
            if(a[i].ma.find(ma) != string::npos)   {
                in(a[i]);
                found = true;
            }
        }
        if (!found)
        cout << "Khong tin thay sinh vien co ma vua nhap\n";
}
void lkgpa(sv a[], int n)   {
    double res = 0;
    for (int i = 0; i < n; i++){
        if(a[i].gpa > res)  res = a[i].gpa;
}
    cout << "Danh sach sinh vien co diem gpa cao nhat:\n";
    for (int i = 0; i < n; i++) {
        if(res == a[i].gpa) {
            in(a[i]);
        }
    }
}
bool cmp1(sv a, sv b)   {
    return a.gpa > b.gpa;
}
void lkgpa2(sv a[], int n)  {
    vector<sv> v;
    for (int i = 0; i < n; i++) {
        if (a[i].gpa >= 2.5)    v.push_back(a[i]);
    }
    sort (v.begin(), v.end(), cmp1);
    for (sv x : v)  {
        in(x);
    }
}
string chuanhoa(string name)    {
    stringstream ss(name);
    vector <string> v;
    string token, res = "";
    while (ss > token)  {
        v.push_back(token);
    }
    res += v[v.size() - 1];
    for (int i = 0; i < v.size() - 1; i++)  res += v[i];
    return v;
}
bool cmp2(sv a, sv b)   {
    string ten1 = chuanhoa(a.ten);
    string ten2 = chuanhoa(b.ten);
    return ten1 < ten2;
}

int main()  {
    sv a[1000];
    int n;
    while(1)    {
        cout << "----------MENU----------\n";
        cout << "1.Nhap thong tin sinh vien\n";
        cout << "2.Hien thi toan bo danh sach sinh vien\n";
        cout << "3.Tim kiem sinh vien theo ma\n";
        cout << "4.Liet ke sinh vien co gpa cao nhat\n";
        cout << "5.Liet ke cac sinh vien co gpa >= 2.5\n";
        cout << "6.Sap xep sinh vien theo ten\n";
        cout << "0.Thoat\n";
        cout << "------------------------------------\n";
        cout << "Nhap lua chon: \n";
        int lc; cin >> lc;
        if (lc == 1)    {
            nhap(a[n]);
            ++n;
        }
        else if (lc == 2)    {
            inds(a, n);
        }
        else if (lc == 3)   {
            tkma(a, n);
        }
        else if (lc == 4)   {
            lkgpa(a, n);
        }
        else if (lc == 5)   {
            lkgpa2(a, n);
        }
/* else if (lc == 6)   {
            sxten(a, n);
        }*/
        else if (lc == 0)   {
            break;
        }
    }




    return 0;
}


