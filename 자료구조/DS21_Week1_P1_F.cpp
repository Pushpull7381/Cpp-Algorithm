#include <iostream>
#include <string>
#include <sstream>
using namespace std;


class Array {
private:
    int N;
    int *arr;
    int arrSize;
public:
    Array(int sz) {
        this->arrSize = sz;
        this->arr = new int [arrSize];
        for(int i=0;i<sz;i++) {
            arr[i]=0;
        }
    }
    int at(int i) {
        return arr[i];
    }

    void add(int i, int value) {
        for(int j=arrSize-2;j>=i;j++) {
            arr[j+1]=arr[j];
        }
        arr[i]=value;
    }

    void remove(int i) {
        for(int j=i+1;j<arrSize;j++) {
            arr[j-1]=arr[j];
        }
        arr[arrSize-1]=0;
    }

    void set(int i, int value) {
        arr[i]=value;
    }

    void print() {
        for(int i=0;i<arrSize;i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }

    void find_max() {
        int max=0;
        for(int i=0;i<arrSize;i++) {
            if(arr[i]>max) {
                max=arr[i];
            }
        }
        cout << max;
    }
};

int main() {
    int N, T;
    string input;
    cin >> N >> T;
    Array Arr(N);
    for(int i=0;i<T;i++) {
        cin >> input;
        if(input[0]=='find_max') {
            Arr.find_max();
        }
        else if(input[0]=='at') {
            Arr.at(int(input[1]));
        }
        else if(input[0]=='add') {
            Arr.add(int(input[1]), int(input[2]));
        }
        else if(input[0]=='remove') {
            Arr.remove(int(input[1]));
        }
        else if(input[0]=='set') {
            Arr.set(int(input[1]), int(input[2]));
        }
        else if(input[0]=='print') {
            Arr.print();
        }
    }
}
