#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int n1, n2;
    cout << "Digite o primeiro número: "<<endl;
    cin >> n1;
    cout << "Digite o segundo número: "<<endl;
    cin >> n2;
    n1+=n2;
    cout << "Digite o terceiro número: "<<endl;
    cin >> n2;
    n1+=n2;
    cout << "A soma dos 3 números é: "<<n1<<" e a média dos mesmos é: "<<n1/3;;
    return 0;
}
