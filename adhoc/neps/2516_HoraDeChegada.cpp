#include <iostream>
#include <string>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string x;   
    getline(cin, x);

    int total = stoi(x.substr(0, 2)) * 60 + stoi(x.substr(3, 2));

    auto convert_to_time = [](int time){
        int h = time / 60;
        int m = time % 60;
        string sth = h > 9 ? to_string(h) : "0" + to_string(h);
        string stm = m > 9 ? to_string(m) : "0" + to_string(m);
        return sth + ":" + stm;
    };

    int newtotal = total;

    if (total + 120 >= 420 && total <= 600) {
        int pre_t = max(420 - total, 0);
        int dur_t = min(600 - max(total, 420), 2 * (120 - pre_t));
        int pos_t = max(120 - (dur_t / 2) - pre_t, 0);
        newtotal = total + pre_t + dur_t + pos_t;
    } else if (total + 120 >= 900 && total <= 1140) {
        int pre_t = max(900 - total, 0);
        int dur_t = min(1140 - max(total, 900), 2 * (120 - pre_t));
        int pos_t = max(120 - (dur_t / 2) - pre_t, 0);
        newtotal = total + pre_t + dur_t + pos_t;
    } else {
        newtotal = total + 120;
    }

    newtotal %= 1440;

    cout << convert_to_time(newtotal) << endl;

    return 0;
}