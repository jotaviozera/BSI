#include <iostream>
#include <cstdlib>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    float x;
    char y[20];
    
    cout<<"Informe o nome: ";
    cin>>y;
    cout<<"Informe o salário: ";
    cin>>x;
    
    if(x<2000){
        cout<<y<<", você está isento de pagar o imposto!";
    }else if(x>=2000&&x<3000){
        x=12*(x*0.15);// multiplica por 12 por ser calculado ao ano
        cout<<y<<", você deverá pagar "<<x<<" de IRPF";
    
    }else if(x>=3000&&x<5000){
        x=12*(x*0.20);
        cout<<y<<", você deverá pagar "<<x<<" de IRPF";
    
    }else if(x>=5000&&x<10000){
        x=12*(x*0.23);
        cout<<y<<", você deverá pagar "<<x<<" de IRPF";
    
    }else if(x>=10000){
        x=12*(x*0.27);
        cout<<y<<", você deverá pagar "<<x<<" de IRPF";
    }
    return 0;
}

