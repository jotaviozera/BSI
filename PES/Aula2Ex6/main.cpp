#include <iostream>
#include <locale>
#include <cmath>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int x, y, ld, rz, cb, ra;
    float rs;
    cout << "Esse programa executara opera��es matematicas"<<endl;
    cout << "Informe 2 n�meros, o primeiro a base e o segundo a potencia \n";
    cin >> x>> y;
    cout << "O resultado de: "<<x<<" elevado a "<<y<<" �: "<<pow(x,y)<<endl;
    cout << "Informe o valor do lado de um quadrado: \n";
    cin >> x;
    cout << "A �rea do quadrado �: "<<pow(x,2)<<endl;
    cout << "Informe um valor para saber sua raiz quadrada: \n";
    cin >> x;
    cout << "A raiz quadrada de: "<<x<<" �: "<< sqrt(x) <<endl;
    cout << "Digite o valor do lado de um cubo: \n";
    cin >> x;
    cout << "A �rea do cubo �: "<<pow(x,3)<<endl;
    cout << "Digite o valor de o raio de uma cricunferencia: \n";
    cin >> x;
    cout << "A �rea da circunferencia �: "<< M_PI*(x*2);


    return 0;
}
