#include <iostream>
#include <vector>
using namespace std;
int main() {
    int N, M;
    int num;
    cin >> N;
    vector<int> A;
    vector<int> B;
    vector<int> count(M,0);
    for(int i=0;i<M;i++) {
    }
    for(int i=0;i<N;i++) {
        cin >> num;
        A.push_back(num);
    }
    cin >> M;
    for(int i=0;i<M;i++) {
        cin >> num;
        B.push_back(num);
    }
    for(int i=0;i<M;i++) {
        for(int j=0;j<N;j++) {
            if(A[j]==B[i]) {
                count[i]=1;
            }
        }
    }
    for(int i=0;i<M;i++) {
        cout << count[i] << endl;
        
    }
}