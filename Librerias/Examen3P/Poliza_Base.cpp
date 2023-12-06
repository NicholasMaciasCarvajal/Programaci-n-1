#ifndef Polizas_h
#define Polizas_h

#include <iostream>
#include <string>

// Creación de la clase base
class Base {
public:
    // Constructor de la clase base
    Base(std::string nombre, std::string curp, int edad, int ano, float deducible, float prestamo_max)
            : nombre(nombre), curp(curp), edad(edad), ano(ano), deducible(deducible), prestamo_max(prestamo_max) {}

    // Métodos set
    void setNombre(std::string nombre) {
        this->nombre = nombre;
    }
    void setCurp(std::string curp) {
        this->curp = curp;
    }
    void setEdad(int edad) {
        this->edad = edad;
    }
    void setAno(int ano) {
        this->ano = ano;
    }
    void setDeducible(float deducible) {
        this->deducible = deducible;
    }
    void setPrestamo_Max(float prestamo_max) {
        this->prestamo_max = prestamo_max;
    }

    // Métodos get
    std::string getNombre() const {
        return this->nombre;
    }
    std::string getCurp() const {
        return this->curp;
    }
    int getEdad() const {
        return this->edad;
    }
    int getAno() const {
        return this->ano;
    }
    float getDeducible() const {
        return this->deducible;
    }
    float getPrestamo_Max() const {
        return this->prestamo_max;
    }

protected:
    std::string nombre;
    std::string curp;
    int edad;
    int ano;
    float deducible;
    float prestamo_max;
};

// Creación de la clase PolizaCasa
class PolizaCasa : public Base {
public:
    // Constructor de la clase PolizaCasa
    PolizaCasa(std::string nombre, float deducible, float prestamo_max, int fconstruccion, std::string direccion, float tam)
            : Base(nombre, "", 0, 0, deducible, prestamo_max), fconstruccion(fconstruccion), direccion(direccion), tam(tam) {}

    // Métodos set
    void setFconstruccion(int fconstruccion) {
        this->fconstruccion = fconstruccion;
    }
    void setTam(float tam) {
        this->tam = tam;
    }
    void setDireccion(std::string direccion) {
        this->direccion = direccion;
    }

    // Métodos get
    std::string getDireccion() const {
        return this->direccion;
    }
    int getFconstruccion() const {
        return this->fconstruccion;
    }
    float getTam() const {
        return this->tam;
    }

private:
    std::string direccion;
    int fconstruccion;
    float tam;
};

// Creación de la clase PolizaVida
class PolizaVida : public Base {
public:
    // Constructor de la clase PolizaVida
    PolizaVida(std::string nombre, int edad, float deducible, float prestamo_max, bool enfermedades, std::string tiposangre)
            : Base(nombre, "", edad, 0, deducible, prestamo_max), enfermedades(enfermedades), tiposangre(tiposangre) {}

    // Métodos set
    void setEnfermedades(bool enfermedades) {
        this->enfermedades = enfermedades;
    }
    void setTiposangre(std::string tiposangre) {
        this->tiposangre = tiposangre;
    }

    // Métodos get
    bool getEnfermedades() const {
        return this->enfermedades;
    }
    std::string getTiposangre() const {
        return this->tiposangre;
    }

private:
    std::string tiposangre;
    bool enfermedades;
};

// Creación de la clase PolizaCarro
class PolizaCarro : public Base {
public:
    // Constructor de la clase PolizaCarro
    PolizaCarro(std::string nombre, float deducible, float prestamo_max, std::string modelo, std::string marca, int ano2, float kilometraje, std::string numdeserie)
            : Base(nombre, "", 0, ano2, deducible, prestamo_max), modelo(modelo), marca(marca), ano2(ano2), kilometraje(kilometraje), numdeserie(numdeserie) {}

    // Métodos set
    void setModelo(std::string modelo) {
        this->modelo = modelo;
    }
    void setMarca(std::string marca) {
        this->marca = marca;
    }
    void setNumdeserie(std::string numdeserie) {
        this->numdeserie = numdeserie;
    }
    void setAno2(int ano2) {
        this->ano2 = ano2;
    }
    void setKilometraje(float kilometraje) {
        this->kilometraje = kilometraje;
    }

    // Métodos get
    std::string getModelo() const {
        return this->modelo;
    }
    std::string getMarca() const {
        return this->marca;
    }
    std::string getNumdeserie() const {
        return this->numdeserie;
    }
    int getAno2() const {
        return this->ano2;
    }
    float getKilometraje() const {
        return this->kilometraje;
    }

private:
    std::string modelo;
    std::string marca;
    std::string numdeserie;
    int ano2;
    float kilometraje;
};

#endif