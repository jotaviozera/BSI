

#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    int x, y;
    cout<<"Informe o primeiro número: ";
    cin>>x;
    cout<<"Informe o segundo número: ";
    cin>>y;
    if(x>y){
        cout<<"O primeiro número é maior!";
    }else{
        if(x=y){
            cout<<"Ambos números são iguais!";
        }else{
        cout<<"O segundo número é maior!";
        }
    }
    
    return 0;
}

