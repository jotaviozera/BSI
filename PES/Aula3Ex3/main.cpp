
#include <cstdlib>
#include <iostream>
using namespace std;

int main(int argc, char** argv) {
    float media;
    cout<<"Digite a média do aluno: ";
    cin>>media;
    if(media>=0&&media<=10){
        cout<<"\nA média é valida!\n";
        if(media>=6){
            cout<<"Aluno foi aprovado com média "<<media<<"!";
        }
        else{
            cout<<"Aluno foi reprovado com média "<<media;
        }
    }
    else
        cout<<"A média é inválida!!!\n";  
    return 0;
}

