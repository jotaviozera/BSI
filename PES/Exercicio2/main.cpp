#include <iostream>
#include <cstdlib>

using namespace std;

int main(int argc, char** argv) {
    char z[20];
    float x, y;
    cout<<"Informe o nome do aluno: ";
    cin>>z;
    cout<<"Informe a primeira nota: ";
    cin>>x;
    cout<<"Informe a segunda nota: ";
    cin>>y;
    x+=y;
    cout<<"Informe a terceira nota: ";
    cin>>y;
    x+=y;
    cout<<"Aluno "<<z<<" possui média "<<x/3;
      
    return 0;
}

