#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    string str,str1,str2,str3;
    cin >> str >> str1 >> str2 >> str3;
    if(str[0]==str[1] && str[0] == str1[0] && str[0] == str1[1]){
        cout <<"No";
        return 0;
    }
    if(str[1]==str[2] && str[1] == str1[1] && str[1] == str1[2]){
        cout <<"No";
        return 0;
    }
    if(str[2]==str[3] && str[2] == str1[2] && str[2] == str1[3]){
        cout <<"No";
        return 0;
    }
    if(str1[0]==str1[1] && str1[0] == str2[0] && str1[0] == str2[1]){
        cout <<"No";
        return 0;
    }
    if(str1[1]==str1[2] && str1[1] == str2[1] && str1[1] == str2[2]){
        cout <<"No";
        return 0;
    }
    if(str1[2]==str1[3] && str1[2] == str2[2] && str1[1] == str2[3]){
        cout <<"No";
        return 0;
    }
    if(str2[0]==str2[1] && str2[0] == str3[0] && str2[0] == str3[1]){
        cout <<"No";
        return 0;
    }
    if(str2[1]==str2[2] && str2[1] == str3[1] && str2[1] == str3[2]){
        cout <<"No";
        return 0;
    }
    if(str2[2]==str2[3] && str2[2] == str3[2] && str2[2] == str3[3]){
        cout <<"No";
        return 0;
    }
    cout << "Yes";
    return 0;
}