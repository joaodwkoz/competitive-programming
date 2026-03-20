#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b, c, d;
    cin >> a >> b >> c >> d;

    int arr[4] = {a, b, c, d};
    sort(arr, arr + 4);

    cout << ((arr[0] + arr[1] > arr[2]) || (arr[0] + arr[2] > arr[3]) || (arr[1] + arr[2] > arr[3])  ? "S" : "N") << endl;

    return 0;
}