#include <iostream>
#include <locale>
#include <cmath>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int x, y, ld, rz, cb, ra;
    float rs;
    cout << "Esse programa executara operações matematicas"<<endl;
    cout << "Informe 2 números, o primeiro a base e o segundo a potencia \n";
    cin >> x>> y;
    cout << "O resultado de: "<<x<<" elevado a "<<y<<" é: "<<pow(x,y)<<endl;
    cout << "Informe o valor do lado de um quadrado: \n";
    cin >> x;
    cout << "A área do quadrado é: "<<pow(x,2)<<endl;
    cout << "Informe um valor para saber sua raiz quadrada: \n";
    cin >> x;
    cout << "A raiz quadrada de: "<<x<<" é: "<< sqrt(x) <<endl;
    cout << "Digite o valor do lado de um cubo: \n";
    cin >> x;
    cout << "A área do cubo é: "<<pow(x,3)<<endl;
    cout << "Digite o valor de o raio de uma cricunferencia: \n";
    cin >> x;
    cout << "A área da circunferencia é: "<< M_PI*(x*2);


    return 0;
}
