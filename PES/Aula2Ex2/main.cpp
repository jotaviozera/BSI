#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int n1, n2;
    bool rs;
    cout << "Operadores L�gicos" << endl;
    cout << "Digite 2 n�meros" << endl;
    cin >> n1 >>n2;
    cout << "A nega��o do primeiro n�mero �: " << !n1 << endl;
    cout << "A opera��o AND entre o primeiro e segundo n�mero �: " << (n1 && n2) << endl;
    cout << "A opera��o OR entre o primeiro e segundo n�mero �: " << (n1 || n2) << endl;
    return 0;
}
