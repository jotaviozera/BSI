
#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    int opc;
    cout<<"Digite 1 para Prato do Dia!\n";
    cout<<"Digite 2 para Lasanha!\n";
    cout<<"Digite 3 para Picanha Grelhada!\n";
    cout<<"Digite 4 para Sala Simples!\n";
    cin>>opc;
    switch(opc){
        case 1: 
            cout << "Prato do dia: 17.00 reais";
        break;
        case 2: 
            cout << "Lasanha: 17.00 reais";
        break;
        case 3: 
            cout << "Picanha Grelhada: 21.00 reais";
        break;
        case 4: 
            cout << "Salada Simples: 7.99 reais";
        break;
    }
    
    return 0;
}

