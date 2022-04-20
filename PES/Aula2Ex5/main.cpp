#include<iostream>

#include <cstdlib>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    float tp;
    cout << "Infome a temperatura em °F: ";
    cin>> tp;
    tp = (tp-32)*(5.0/9.0);
    cout<< "A temperara em ° Celsius é: "<<tp;
    return 0;
}

