#include <iostream>
#include <vector>
using namespace std;

int main() {
    int p, n, h;
    int check=0;
    cin >> p >> n >> h;
    vector<vector<int>> money;
    for (int i = 0; i < n; i++) {
        int num; //pc번호
        int time; //이용시간
        cin >> num >> time;
        if (time <= h) {
            vector<int> put;
            put.push_back(num);
            put.push_back(time);
            money.push_back(put);
            check++;
        }
    }
    vector<vector<int>> fi;
    for (int i = 0; i < p; i++) {
        vector<int> cho;
        cho.push_back(i);
        cho.push_back(0);
        fi.push_back(cho);
    }
    for (int i = 0; i < check; i++) {
        int pc_number;
        int pc_time;
        pc_number = money[i][0];
        pc_time = money[i][1] * 1000;
        fi[pc_number-1][1] += pc_time;
    }
    for (int i = 0; i < p; i++) {
        cout << i + 1 << " " << fi[i][1] << endl;
    }
}