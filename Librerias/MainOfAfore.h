#include <iostream>
#include <string>
#include "Persona_h"

int main() {
    Trabajador Juan("Juan", 22, "Psicologo", 10000);

    std::cout << "Nombre: " << Juan.getNombre() << std::endl;
    std::cout << "Edad: " << Juan.getEdad() << std::endl;
    std::cout << "Ocupacion: " << Juan.getOcupacion() << std::endl;
    std::cout << "Sueldo: " << Juan.getSueldo() << std::endl;
    std::cout << "Servicio: " << Juan.calcularServicio() << std::endl;
    std::cout << "Ahorros: " << Juan.calcularAhorros() << std::endl;

    return 0;
}
