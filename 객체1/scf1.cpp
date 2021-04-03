#include <iostream>
#include <iomanip>
using namespace std;
int main() {
	int N;
    cin >> N;
    int h1 = 0, m1 = 0, h2 = 0, m2 = 0;
	char b1, b2, b3;
	int H1 = 0, M1 = 0, H2 = 0, M2 = 0;
    for(int i=0;i<N;i++) {
        cin >> h1 >> b1 >> m1 >> b2 >> h2 >> b3 >> m2;
        if(i==0) {
            H1 = h1;
            M1 = m1;
            H2 = h2;
            M2 = m2;
        }
        if(h1>H1) {
            H1 = h1;
            M1 = m1;
        }
        else if(h1==H1) {
            if(m1 > M1) {
                M1 = m1;
            }
        }
        if(h2<H2) {
            H2 = h2;
            M2 = m2;
        }
        else if(h2==H2) {
            if(m2 < M2) {
                M2 = m2;
            }
        }
    }

    if(H1>H2) cout << "-1";
    else if(H1==H2) {
        if(M1 > M2) cout << "-1";
    }
    else {
        cout.width(2);
        cout.fill('0');
        cout << H1 << ':' ;
        
        cout.width(2);
        cout.fill('0');
        cout << M1 << " ~ " ;
        
        cout.width(2);
        cout.fill('0');
        cout << H2  << ':';
        
        cout.width(2);
        cout.fill('0');
        cout << M2 << endl;
    }
    /*
    else {
        if(M1==0 && M2!=0) {
            cout << H1 << ':' << M1 << M1 << ' ' << H2  << ':'<< M2 << endl;
        }
        else if(M1!=0 && M2==0) {
            cout << H1 << ':' << M1 << ' ' << H2  << ':'<< M2 << M2 << endl;
        }
        else if(M1==0 && M2==0) {
            cout << H1 << ':' << M1 << M1 << ' ' << H2  << ':'<< M2 << M2;
        }
    }*/
	return 0;
}
