#include <iostream>
#include <vector>
using namespace std;

int main() {
    int M, N;
    char ch;
    cin >> M >> N;
    vector <char> vec1;
    vector<vector<char>> vec;
    for(int i=0;i<N;i++) {
        for(int j=0;j<M;j++) {
            cin >> ch;
            vec1.push_back(ch);
        }
        vec.push_back(vec1);
    }
    for(int i=0;i<N;i++) {
        for(int j=0;j<M;j++) {
            cout << vec[i][j];
        }
        cout << endl;
    }
    for(int i=0;i<M-7;i++) {
        int start=0;
        for(int j=0;j<M-7;j++) {
            if(vec[i][])
        }
    }

}