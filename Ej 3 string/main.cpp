#include <iostream>
#include <string>

int main () {

    std::string cadena1 = "Sopa de ";
    std::string cadena2 = "macaco";

    std::string cadena_resultante = cadena1 + cadena2;

    std::cout << "Cadena resultante: " << cadena_resultante << std::endl;

    return 0;
}