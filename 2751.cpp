#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N;
    int num;
    vector<int> ar;
    cin >> N;
    for(int i=0;i<N;i++) {
        cin >> num;
        if(find(ar.begin(), ar.end(), num) == ar.end()) { 
            ar.push_back(num);
        }
    }
    sort(ar.begin(), ar.end());
    for(int i=0;i<ar.size();i++) {
        cout << ar[i] << "\n";
    }
}