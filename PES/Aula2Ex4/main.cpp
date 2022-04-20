#include <iostream>
#include <cstdlib>

using namespace std;

int main(int argc, char** argv) {

    char nm[20];
    float ds, tp;
    cout<< "Informe o nome: ";
    cin>>nm;
    cout<< "Quantos quilometros andou de bicicleta: ";
    cin>>ds;
    cout<< "Quanto tempo gasto em minutos: ";
    cin>> tp;
    cout << "Olá "<<nm<<" você percorreu "<<ds<<"km em "<<tp<<" minutos, sua velocidade média foi: "<<(ds/(tp/60))<<" km/h" << endl;
    return 0;
}

