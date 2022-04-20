#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");
    cout << "Hello world!" << endl;
    int n1, n2, n3;
    bool rs;
    cout<< "Operadores Racionais";
    cout<< "Digite 3 números: " << endl;
    cin>> n1>> n2>> n3;
    rs = n1>n2;
    cout<< "O resultado da operação: numero1 é maior que o numero2, é: " << rs<<endl;
    rs = n3==n2;
    cout<< "O resultado da operação: numero2 é igual ao numero3, é: " << rs<<endl;
    rs = n1!=n3;
    cout<< "O resultado da operação: numero3 é diferente do numero1 é: " << rs<<endl;

    return 0;
}
