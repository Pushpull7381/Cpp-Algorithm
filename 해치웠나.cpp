#include <iostream>
using namespace std;

int main() {
    string st;
    int left=0;
    int right=0;
    cin >> st;
    for(int i=0;i<st.length();i++) {
        if(st[i]=='(') {
            right++;
        }
        else if(st[i]==')') {
            left++;
        }
    }
    if(left==right) {
        cout << "YES";
    }
    else cout << "NO";
    return 0;
}