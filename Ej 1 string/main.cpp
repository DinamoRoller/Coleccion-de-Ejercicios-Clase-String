#include <iostream>
#include <string>

int main() {
    std::string frase = "Hola";

    std::cout << "Frase: " << frase << std::endl;

    std::cout << "Tamaño de la cadena: " << frase.size() << std::endl;

    std::cout << "Esta la cadena vacia: " << (frase.empty() ? "Si" : "No") << std::endl;

    return 0;
}