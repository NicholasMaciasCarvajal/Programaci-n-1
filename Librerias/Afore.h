#ifndef afore_h
#define afore_h

#include <iostream>
#include <string>

class Persona {
public:
    Persona(std::string nombre, int edad) : nombre(nombre), edad(edad) {}

    std::string getNombre() const {
        return nombre;
    }

    int getEdad() const {
        return edad;
    }

private:
    std::string nombre;
    int edad;
};

class Trabajador : public Persona {
public:
    Trabajador(std::string nombre, int edad, std::string ocupacion, int sueldo)
        : Persona(nombre, edad), ocupacion(ocupacion), sueldo(sueldo) {}

    std::string getOcupacion() const {
        return ocupacion;
    }

    int getSueldo() const {
        return sueldo;
    }

    int calcularServicio() const {
        return 65 - getEdad();
    }

    int calcularAhorros() const {
        return (calcularServicio() * getSueldo()) / 10;
    }

private:
    std::string ocupacion;
    int sueldo;
};

#endif //afore_h
