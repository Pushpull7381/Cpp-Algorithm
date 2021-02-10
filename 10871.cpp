#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int N, X, m;
    cin >> N >> X;
    vector<int> arr(N, 0);
    for (int i = 0; i < N; i++)
    {
        cin >> m;
        if (m < X)
        {
            arr[i] = m;
        }
    }
    for (int i = 0; i < N; i++)
    {
        if (arr[i] != 0)
        {
            cout << arr[i] << " ";
        }
    }
}