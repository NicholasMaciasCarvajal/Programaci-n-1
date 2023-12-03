#include <iostream>
#include <string>

int main(){
    Base Diego("Diego","AWWS20123012AS223GWS", edad, 2000, 10000, 1000000);
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

    PolizaVida Vida("Diego", edad, 10000, 1000000, 0, "A");
    std::cout << Vida.getNombre() << std::endl;
    std::cout << Vida.getEdad() << std::endl;
    std::cout << Vida.getDeducible() << std::endl;
    std::cout << Vida.getPrestamo_Max() << std::endl;
    std::cout << Vida.getEnfermedades() << std::endl;
    std::cout << Vida.getTiposangre() << std::endl;

    PolizaCarro Carro("Diego", 10000, 1000000, "01294ofn", "Toyota", 2020, 0, "0000001");
    std::cout << Carro.getNombre() << std::endl;
    std::cout << Carro.getDeducible() << std::endl;
    std::cout << Carro.getPrestamo_Max() << std::endl;
    std::cout << Carro.getModelo() << std::endl;
    std::cout << Carro.getMarca() << std::endl;
    std::cout << Carro.getAno2() << std::endl;
    std::cout << Carro.getKilometraje() << std::endl;
    std::cout << Carro.getNumdeserie() << std::endl;
}