#include <iostream>
#include <cstdlib>

using namespace std;

int main(int argc, char** argv) {

    int x;
    cout<<"Escolha uma das opções: "<<endl;
    cout<<"1 - São Paulo"<<endl;
    cout<<"2 - Santos"<<endl;
    cout<<"3 - Palmeiras"<<endl;
    cout<<"4 - Corinthians"<<endl;
    cin>>x;
    switch(x){
        case 1:
            cout<<endl<<"Salve o tricolor paulista \nAmado clube brasileiro \nTu és forte, tu és grande \nDentre os grandes és o primeiro";
            break;
        case 2:
            cout<<endl<<"Agora quem dá bola é o Santos. \nO Santos é o novo campeão. \nGlorioso alvinegro praiano, \nCampeão absoluto desse ano!";
            break;
        case 3:
            cout<<endl<<"Blue is the colour, football is the game \nWe're all together, and winning is our aim \nSo cheer us on through the Sun and rain \nCause Chelsea, Chelsea is our name";
            break;
        case 4:
            cout<<endl<<"Salve o Corinthians, O campeão dos campeões, \nEternamente dentro dos nossos corações \nSalve o Corinthians de tradições e glórias mil \nTu és orgulho Dos esportistas do Brasil";
            break;
    }
    return 0;
}

