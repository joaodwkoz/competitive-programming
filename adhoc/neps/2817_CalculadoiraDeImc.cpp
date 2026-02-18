#include <iostream>

using namespace std;

struct Imc {
    int id;
    double p, a;
    
    double getImc() {
        return p / (a * a);
    }

    string getClassification() {
        double res = getImc();

        if (res < 18) {
            return "baixo peso"; 
        } else if (res < 24.9) {
            return "peso adequado"; 
        } else if (res < 29.9) {
           return "sobrepeso";
        } else if (res < 34.9) {
            return "obesidade grau 1";
        } else if (res < 39.9) {
            return "obesidade grau 2";
        } else {
            return "obesidade grau 3";
        }
    }
} u;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int id;
    double p, a;
    cin >> id >> p >> a;

    u = {id, p, a};

    cout << u.getClassification() << endl;

    return 0;
}