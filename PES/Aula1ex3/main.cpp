#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int n1, n2;
    cout << "Digite o primeiro n�mero: "<<endl;
    cin >> n1;
    cout << "Digite o segundo n�mero: "<<endl;
    cin >> n2;
    n1+=n2;
    cout << "Digite o terceiro n�mero: "<<endl;
    cin >> n2;
    n1+=n2;
    cout << "A soma dos 3 n�meros �: "<<n1<<" e a m�dia dos mesmos �: "<<n1/3;;
    return 0;
}
