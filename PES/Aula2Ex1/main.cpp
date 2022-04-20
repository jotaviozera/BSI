#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");
    float n1, n2, n3, sm, sb, dv, mp;
    int rt, n4, n5;
    cout << "Este programa irá executar algumas operações matemáticas." << endl;
    cout << "Cinco números serão necessários." << endl << endl;
    cout << "Digite o primeiro número: " << endl;
    cin >> num1;
    cout << "Digite o segundo número: " << endl;
    cin >> num2;
    cout << "Digite o terceiro número: " << endl;
    cin >> num3;
    cout << "Digite o quarto número: " << endl;
    cin >> num4;
    cout << "Digite o quinto número: " << endl;
    cin >> num5;
    sm = n1 + n2;
    cout << "A soma do primeiro e segundo número é: " << sm << endl;
    sb = n2/n1;
    cout << "A subtração do terceiro e primeiro número é: " << dv << endl;

    return 0;
}
