#include <iostream>
#include <string>
#include <vector>
#include <sstream>
using namespace std;

int main() {
    string str;
    cin >> str;
    istringstream ss(str);
    string stringBuffer;
    vector<string> x;
    x.clear();
    cout<<"어떻게 잘리는지 확인해봅시다 ->";
    //구분자가 , 이라면 getline(ss, stringBuffer, ',')쓰면됨
    while (getline(ss, stringBuffer, ' ')){
        x.push_back(stringBuffer);
        cout<<stringBuffer<<" ";
    }
}