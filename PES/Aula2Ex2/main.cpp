#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int n1, n2;
    bool rs;
    cout << "Operadores Lógicos" << endl;
    cout << "Digite 2 números" << endl;
    cin >> n1 >>n2;
    cout << "A negação do primeiro número é: " << !n1 << endl;
    cout << "A operação AND entre o primeiro e segundo número é: " << (n1 && n2) << endl;
    cout << "A operação OR entre o primeiro e segundo número é: " << (n1 || n2) << endl;
    return 0;
}
