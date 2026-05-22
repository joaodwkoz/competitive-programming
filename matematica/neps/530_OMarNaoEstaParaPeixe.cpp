#include <iostream>

using namespace std;

const int MAX_C = 110;

bool arr[MAX_C][MAX_C];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    int x1, x2, y1, y2;
    for (int i = 1; i <= n; i++)
    {
        cin >> x1 >> x2 >> y1 >> y2;
        for (int j = x1; j < x2; j++)
        {
            for (int k = y1; k < y2; k++)
            {
                arr[j][k] = true;
            }
        }
    }

    int ans = 0;
    for (int i = 1; i < MAX_C; i++)
    {
        for (int j = 1; j < MAX_C; j++)
        {
            ans += (int)(arr[i][j]);
        }
    }

    cout << ans << endl;

    return 0;
}