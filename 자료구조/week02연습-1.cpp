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
    cout<<"��� �߸����� Ȯ���غ��ô� ->";
    //�����ڰ� , �̶�� getline(ss, stringBuffer, ',')�����
    while (getline(ss, stringBuffer, ' ')){
        x.push_back(stringBuffer);
        cout<<stringBuffer<<" ";
    }
}