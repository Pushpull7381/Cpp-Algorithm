#include <iostream>
#include <vector>
using namespace std;
// TODO: 코드 좀 이상...
int main()
{
    int N;
    int check = 0;
    cin >> N;
    vector<string> arr(N);
    vector<int> cnt(N, 0);
    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
        cout << arr[i].size();
        for (int j = 0; arr[i].size(); j++)
        {
            cout << arr[i];
            if (arr[i][j] == 'O')
            {
                cnt[i]++;
                cnt[i] += check;
                check++;
            }
            else
            {
                check = 0;
            }
        }
        cout << cnt[i] << "\n";
    }
}