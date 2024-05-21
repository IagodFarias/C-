
#include<iostream>

class carro{
public:

std::string marca;
std::string cor;

void acelerando(){

std:: cout << "estou acelerando";
};
void freando(){

std:: cout << "estou acelerando";
};
void parado(){

std:: cout << "estou acelerando";

};

};

int main (){

carro iago;

iago.cor = "preto";
iago.marca = "ferrarri";
iago.acelerando();

std:: cout << std:: endl << iago.cor << std::endl;
std:: cout << iago.marca << std::endl;


}