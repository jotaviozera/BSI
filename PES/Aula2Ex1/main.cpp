#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");
    float n1, n2, n3, sm, sb, dv, mp;
    int rt, n4, n5;
    cout << "Este programa ir� executar algumas opera��es matem�ticas." << endl;
    cout << "Cinco n�meros ser�o necess�rios." << endl << endl;
    cout << "Digite o primeiro n�mero: " << endl;
    cin >> num1;
    cout << "Digite o segundo n�mero: " << endl;
    cin >> num2;
    cout << "Digite o terceiro n�mero: " << endl;
    cin >> num3;
    cout << "Digite o quarto n�mero: " << endl;
    cin >> num4;
    cout << "Digite o quinto n�mero: " << endl;
    cin >> num5;
    sm = n1 + n2;
    cout << "A soma do primeiro e segundo n�mero �: " << sm << endl;
    sb = n2/n1;
    cout << "A subtra��o do terceiro e primeiro n�mero �: " << dv << endl;

    return 0;
}
