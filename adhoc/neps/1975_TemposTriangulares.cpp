#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int arr[3];
    cin >> arr[0] >> arr[1] >> arr[2];

    int s = arr[0] + arr[1] + arr[2];
    if (s != 180) {
        cout << "Error" << endl;
        return 0;
    }

    sort(arr, arr + 3);

    if (arr[0] == 60) {
        cout << "Equilateral" << endl;
    } else if (arr[0] == arr[1] || arr[1] == arr[2]) {
        cout << "Isosceles" << endl;
    } else {
        cout << "Scalene" << endl;
    }

    return 0;
}