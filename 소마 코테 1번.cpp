#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    char ch; 
    string st;
    vector<char> skill; // 스킬들
    while(1) {
        cin.get(ch);
        if (ch == '\n') break;   
        if (ch!=' ') skill.push_back(ch);
    }
    for(int i=0;i<skill.size();i++) {
        cout << skill[i];
    }
    int N; //연계 스킬 개수
    cin >> N;
    vector<vector<char>> link;
    for(int i=0;i<N;i++) {
        vector<char> put;
        char chh[2];
        cin >> chh[0] >> chh[1];
        put.push_back(chh[0]);
        put.push_back(chh[1]);
        link.push_back(put);
    }
}