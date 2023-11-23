#include <iostream>
#include <string>

int main() {

    std::string myString = "Ejemplo";

    std::cout << "Tamaño de la cadena: " << myString.size() << std::endl;

    std::cout << "Esta la cadena vacia: " << (myString.empty() ? "Si" : "No") << std::endl;

    return 0;
}