#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a, t1, y1;
    cout << "=== Metodo Separavel ===" << endl;
    cout << "Informe o valor inicial y(0) = a: ";
    cin >> a;

    cout << "Informe outro ponto (t1, y(t1)), com t1 != 0:" << endl;
    cout << "t1 = ";
    cin >> t1;
    cout << "y(t1) = ";
    cin >> y1;

    if (t1 == 0 || a == 0 || y1 <= 0) {
        cout << "Valores invalidos! Certifique-se que t1 != 0 e y1/a > 0." << endl;
        return 1;
    }

    // calcula k = (1/t1) * ln(y1/a)
    double k = (1.0 / t1) * log(y1 / a);

    cout << "\nConstante calculada: k = " << k << endl;
    cout << "Funcao obtida: y(t) = " << a << " * e^(" << k << " * t)" << endl;

    // consulta outro ponto
    double t2;
    cout << "\nDigite um valor de t para calcular y(t): ";
    cin >> t2;

    double y2 = a * exp(k * t2);
    cout << "Resultado: y(" << t2 << ") = " << y2 << endl;

    return 0;
}
