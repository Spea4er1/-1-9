#include <iostream>
#include <string>
using namespace std;
 
int main()
{
    string str;
    int n;
    cin >> n;
    string t_char = "ABCEHKMOPTXY"; //АВСЕНКМОРТХУ
    string t_digit = "0123456789";
    for(int i = 0; i < n; ++i){
        cin >> str;
        if(str.size() != 6) {
          cout << "No" << endl;
          continue;
        }
        int pos = t_char.find(str[0]);
        if(pos == -1){
            cout << "No" << endl;
            continue;
        }
        pos = t_digit.find(str[1]);
        if(pos == -1){
            cout << "No" << endl;
            continue;
        }
        pos = t_digit.find(str[2]);
        if(pos == -1){
            cout << "No" << endl;
            continue;
        }
        pos = t_digit.find(str[3]);
        if(pos == -1){
            cout << "No" << endl;
            continue;
        }
        pos = t_char.find(str[4]);
        if(pos == -1){
            cout << "No" << endl;
            continue;
        }
        pos = t_char.find(str[5]);
        if(pos == -1){
            cout << "No" << endl;
            continue;
        }
        cout << "Yes" << endl;
    }
    return 0;
}