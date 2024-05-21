#include<iostream>
//#include<string>
class pessoa{

protected:

std::string nome;
int idade;
int CPF;


public:

//constructor

    pessoa () {}

// atributos

int idade;
int altura;
int CPF;

// métodos

void parado();
void andando();
void correndo();

};


int main(){

pessoa eu;

//eu.name = "iagod";
eu.idade = 22;
eu.altura = 1.56;

eu.andando();
eu.correndo();


}
void pessoa::parado(){
    std::cout << nome << " esta parado"<<std::endl;    
}
void pessoa::andando(){
    std::cout << nome << " está andando"<<std::endl;    
}
void pessoa::correndo(){
    std::cout << nome << " está correndo"<<std::endl;    
}