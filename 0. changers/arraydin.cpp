

#include <iostream>
#include <string>
#include <cstring>

int main() {
    std::string vname;
    std::getline(std::cin, vname);

    char* vnameCStr = new char[vname.size() + 1]; // +1 para o caractere nulo
    std::strcpy(vnameCStr, vname.c_str());

    std::cout << vnameCStr << std::endl;

    delete[] vnameCStr; // Libera a memória alocada

    return 0;
}
