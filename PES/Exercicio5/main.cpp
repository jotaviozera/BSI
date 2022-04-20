#include <iostream>
#include <cstdlib>

using namespace std;

int main(int argc, char** argv) {
    int x, y, z;
    cout<<"Informe o primeiro número: ";
    cin>>x;
    cout<<"Informe o segundo número: ";
    cin>>y;
    cout<<"Informe o terceiro número: ";
    cin>>z;
    if(x>y&&x>z){
        cout<<"O primeiro número é maior!";
    }else{
        if(y>x&&y>z){
            cout<<"O segundo número é maior!";
        }else{
            if(z>y&&z>x){
                cout<<"O terceiro número é o maior";
            }else{
                if(x==y==z){
                    cout<<"Ambos números são iguais!";
                }else{
                    if(x==y&&x!=z){
                        cout<<"O primeiro e o segundo número são iguais e maiores que o terceiro número";
                    }else{
                        if(x==z&&x!=y){
                            cout<<"O terceiro e o primeiro número são iguais e maiores que o segundo número";
                        }else{
                            cout<<"O terceiro e o segundo número são iguais e maiores que o primeiro número";
                        }
                    }
            }
        }
        }
    }
    return 0;
}

