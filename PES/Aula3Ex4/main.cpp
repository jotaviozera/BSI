
#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    int idade;
    cout<<"Digite a idade do nadador: "<<endl;
    cin>>idade;
    if(idade>=5){
        
        cout<<"Categoria do nadador é: \n";
        if(idade>=5&&idade<=7){
            cout<<"Infantil A";
        }else if(idade<=10){
            cout<<"Infantil B";          
        }else if(idade<=13){
            cout<<"Juvenil A";
        }else if(idade<=17){    
            cout<<"Juvenal B";
        }else if(idade>18){
            cout<<"Adulto";
        }    
    }else{
        cout<<"Idade Invalida";
    }
    return 0;
}

