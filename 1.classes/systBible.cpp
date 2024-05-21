// Sistema de gereciamento de uma biblioteca

#include<iostream>

// fazer o cadastro de pessoas
class login{

private:
double dividas;
int pass;  //depois melhorar para colocar uma expressão regular;

public:

std::string name;

//constructor
login( ){

name = " ";
dividas = 0.00;
pass = -1; // validação de senha vazia

}
// métodos

void exibir(){
std:: cout << name << std::endl;
std:: cout << dividas << std::endl;

}


};

// operaçoes com os livros: aluguel, devolução, perda, multa.
class books{};



int main(){

login eu;

std:: cout << "--------------------------" << std::endl;
std:: cout << "digite seu nome: " << std::endl;
std:: cin >> eu.name ;
std:: cout << "--------------------------" << std::endl;




// fazer validacao de login
//if(){


//}



}