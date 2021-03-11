#include <iostream>
#include <vector>
using namespace std;

int main() {
    int T;
    cin >> T;
    for(int i=0;i<T;i++) {
        int N, D;
        cin >> N >> D;
        int arr[10];
        for(int j=0;i<N;j++) {
            int in;
            cin >> in;
            arr[j]=in;
        }
        for(int j=0;j<N;j++) {
            cout << arr[j] << " ";
        }
        vector<int> shift(N,0);
        D=D%N;
        N=N-D;
        for(int j=0;j<D;i++) {
            int k=0;
            shift[k]=arr[k];

        }
        for(int j=D;j<N;j++) {
            shift[j]=arr[j-D];
        }
        for(int j=0;i<N;j++) {
            cout << shift[j] << " ";
        }
        cout << endl;
    }
}