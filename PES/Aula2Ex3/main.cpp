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
    cout<< "Digite 3 n�meros: " << endl;
    cin>> n1>> n2>> n3;
    rs = n1>n2;
    cout<< "O resultado da opera��o: numero1 � maior que o numero2, �: " << rs<<endl;
    rs = n3==n2;
    cout<< "O resultado da opera��o: numero2 � igual ao numero3, �: " << rs<<endl;
    rs = n1!=n3;
    cout<< "O resultado da opera��o: numero3 � diferente do numero1 �: " << rs<<endl;

    return 0;
}
