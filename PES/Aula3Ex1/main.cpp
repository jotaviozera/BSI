/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Aluno
 *
 * Created on 13 de Abril de 2022, 08:19
 */

#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char** argv) {

    int x,y;
    cout<< "\n*** Placar São Paulo X Internacional ***\n";
    cout<< "Digite a quantidade de gols do São Paulo: ";
    cin>>x;
    cout<< "\nDigite a quantidade de gols do Internacional: ";
    cin>>y;
    if(x>=y){
        cout<<"\nSão Paulo ganhou!!";
    }
    else{
        cout<<"Internacional Ganhou!";
    }
    return 0;
}

