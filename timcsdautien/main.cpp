#include <bits/stdc++.h>
using namespace std;
void timcs(string s, char c)    {
    int dd =(int) s.length();
    for (int i = 0; i < dd; i++)   {
        if(s[i] == c)   {
            cout << i + 1 << endl;
            return;
        }
    }
    cout << "-1" << endl;

}
int main()  {
    int t;
    cin >> t;
    string s;
    char x;
    for (int i = 1; i <= t; i++)    {
        cin >> s >> x;
        timcs(s, x);
    }
    return 0;
}
