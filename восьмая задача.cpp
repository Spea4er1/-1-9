#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    string s, s1;
    cin >> s;
    int t1 = 1,t2 = 1, t3 = 1;
    vector<int> a;
    a.push_back(0);
    for(int i = 0; i < s.size() || t3 < s.size(); ++i){
        t3 = t2 + t1;
        t1 = t2;
        t2 = t3;
        a.push_back(t3 - 1);
    }
    for(int i = 0; i < a.size(); ++i)
        if(a[i] < s.size())
        cout << s.substr(a[i],1);
    return 0;
}