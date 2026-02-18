#include <iostream>
#include <vector>

using namespace std;

struct Pessoa {
    int id;
    double p, a;
    
    double getImc() {
        return p / (a * a);
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<Pessoa> ps(n);
    for (Pessoa &x : ps) {
        cin >> x.id >> x.p >> x.a;
    }

    double mxImc = -1;
    int mxId = -1;
    for (int i = 0; i < n; i++) {
        double imc = ps[i].getImc();

        if (imc > mxImc) {
            mxImc = imc;
            mxId = ps[i].id;
        }
    }

    cout << "A pessoa com o maior IMC tem " << mxId << " anos." << endl;

    return 0;
}