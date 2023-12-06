#include <iostream>
#include <string>
#include "Polizas_h"

int main(){
    Base Diego("Diego", "AWWS20123012AS223GWS", 25, 2000, 10000, 1000000);
    std::cout << Diego.getNombre() << std::endl;
    std::cout << Diego.getCurp() << std::endl;
    std::cout << Diego.getEdad() << std::endl;
    std::cout << Diego.getAno() << std::endl;
    std::cout << Diego.getDeducible() << std::endl;
    std::cout << Diego.getPrestamo_Max() << std::endl;

    PolizaCasa Casa("Diego", 10000, 1000000, 2020, "Lopez Mateos", 25.2);
    std::cout << Casa.getNombre() << std::endl;
    std::cout << Casa.getDeducible() << std::endl;
    std::cout << Casa.getPrestamo_Max() << std::endl;
    std::cout << Casa.getFconstruccion() << std::endl;
    std::cout << Casa.getDireccion() << std::endl;
    std::cout << Casa.getTam() << std::endl;
    return 0;
}