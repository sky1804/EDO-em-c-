#include <iostream>
#include <cmath>
using namespace std;

int main() {
    cout << "=== Metodo do Fator Integrante ===" << endl;

    // entrada de dados
    double a, p, x0, y0;
    cout << "Informe a constante a (definida em g(x)=a): ";
    cin >> a;
    cout << "Informe a constante p (de p(x)=p): ";
    cin >> p;
    cout << "Informe a condicao inicial x0: ";
    cin >> x0;
    cout << "Informe a condicao inicial y0 (y(x0)=y0): ";
    cin >> y0;

    if (p == 0) {
        cout << "Erro: p nao pode ser zero neste metodo." << endl;
        return 1;
    }

    // calcular constante C
    double C = (y0 - (a / p)) * exp(p * x0);

    cout << "\nSolução geral: y(x) = " << a << "/" << p << " + C*e^(-" << p << "*x)" << endl;
    cout << "Constante C encontrada: " << C << endl;

    // consulta valor para algum x
    double x;
    cout << "\nDigite um valor de x para calcular y(x): ";
    cin >> x;

    double y = (a / p) + C * exp(-p * x);
    cout << "Resultado: y(" << x << ") = " << y << endl;

    return 0;
}
