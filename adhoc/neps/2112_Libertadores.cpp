#include <iostream>
#include <string>
#include <limits>

using namespace std;

struct Time {
    int p;
    int sg;
    int gad;

    bool operator == (const Time& outro) {
        return p == outro.p && sg == outro.sg && gad == outro.gad;
    }

    bool operator > (const Time& outro) {
        if (p != outro.p) {
            return p > outro.p;
        } else if (sg != outro.sg) {
            return sg > outro.sg;
        }

        return gad > outro.gad;
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    while (t--) {
        string j1 = "";
        string j2 = "";
        getline(cin, j1);
        getline(cin, j2);

        int m_1 = j1[0] - '0';
        int v_1 = j1[4] - '0';
        int m_2 = j2[0] - '0';
        int v_2 = j2[4] - '0';

        int p_a = (m_1 > v_1 ? 3 : m_1 == v_1 ? 1 : 0) + (v_2 > m_2 ? 3 : v_2 == m_2 ? 1 : 0);
        int p_b = (v_1 > m_1 ? 3 : v_1 == m_1 ? 1 : 0) + (m_2 > v_2 ? 3 : m_2 == v_2 ? 1 : 0);

        int sg_a = (m_1 + v_2) - (v_1 + m_2);
        int sg_b = (m_2 + v_1) - (m_1 + v_2);

        int gad_a = v_2;
        int gad_b = v_1;

        cout << p_a << " " << sg_a << " " << gad_a << endl;
        cout << p_b << " " << sg_b << " " << gad_b << endl;

        Time a = { p_a, sg_a, gad_a };
        Time b = { p_b, sg_b, gad_b };

        if (a > b) {
            cout << "Time 1" << endl; 
        } else if (a == b) {
            cout << "Penaltis" << endl;
        } else {
            cout << "Time 2" << endl;
        }
    }

    return 0;
}