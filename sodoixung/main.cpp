#include <bits/stdc++.h>
using namespace std;
bool dx(string s)   {
    int dai =s.length();
    for (int i = 0; i < dai / 2; i++)   {
        if(s[i] != s[dai -  i - 1]) return false;

    }
    return true;
}
int main()  {
    int t;
    cin >> t;
    string s;
    for (int i = 0; i < t; i++)    {
        cin >> s;
        if  (dx(s)) cout <<"yes\n";
        else cout << "no\n";
    }
    return 0;
}
