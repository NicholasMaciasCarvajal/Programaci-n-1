#include <iostream>
#include <string>

//creación de la clase base
class Base {
public:
    Base(std::string nombre, std::string curp, int * edad, int * ano, float deducible, float prestamo_max){}
    //Uso de sets
    void setNombre(std::string nombre){
        this->nombre = nombre;
    };
    void setCurp(std::string curp){
        this->curp = curp;
    };
    void setEdad(int edad){
        this->edad = 2023 - * ano;
    };
    void setAno(int ano){
        this->ano = ano;
    };
    void setDeducible(float deducible){
        this->deducible = deducible;
    };
    void setPrestamo_Max(float prestamo_max){
        this->prestamo_max = prestamo_max;
    };
    //Uso de gets
    std::string getNombre() {
        return this -> nombre;
    }
    std::string getCurp() {
        return this -> curp;
    }
    int getEdad() {
        return this -> edad;
    }
    int getAno () {
        return this -> ano;
    }
    float getDeducible () {
        return this -> deducible;
    }
    float getPrestamo_Max () {
        return this -> prestamo_max;
    }
private:
    std::string nombre;
    std::string curp;
    int edad;
    int ano;
    float deducible;
    float prestamo_max;
protected:
    friend class PolizaCasa;
    std::string getBase() {
        return this -> nombre;
        return this -> prestamo_max;
        return this -> deducible;
    }
    friend class PolizaVida;
    std::string getBase() {
        return this -> nombre;
        return this -> edad;
        return this -> deducible;
        return this -> prestamo_max;
    }
    friend class PolizaCarro;
    std::string getBase() {
        return this -> nombre;
        return this -> deducible;
        return this -> prestamo_max;
    }
};
//creacion de la clase poliza de casa
class PolizaCasa : public Base{
public:
    PolizaCasa(int fconstruccion, std::string direccion, float tam) : Base(nombre, deducible, prestamo_max){}
    //uso de sets
    void setFconstruccion(int fconstruccion){
        this->fconstruccion = fconstruccion;
    };
    void setTam(float tam){
        this->tam = tam;
    };
    void setDireccion(std::string direccion){
        this->direccion = direccion;
    };
    //uso de gets
    std::string getDireccion() {
        return this -> direccion;
    }
    int getFconstruccion() {
        return this -> fconstruccion;
    }
    float getTam() {
        return this -> tam;
    }
private:
    std::string direccion;
    int fconstruccion;
    float tam;
};
//creacion de la clase poliza de vida
class PolizaVida : public Base {
public:
    PolizaVida (bool enfermedades, std::string tiposangre) : Base(nombre, edad, deducible, prestamo_max){}
    //uso de sets
    void setEnfermedades(bool enfermedades){
        this->enfermedades = enfermedades;
    }
    void setTiposangre(std::string tiposangre){
        this->tiposangre = tiposangre;
    }
    //uso de gets
    bool getEnfermedades(){
        return this -> enfermedades;
    }
    std::string getTiposangre(){
        return this -> tiposangre;
    }
private:
    std::string tiposangre;
    bool enfermedades;
};
//creacion de la clase poliza de carro
class PolizaCarro : public Base {
public:
    PolizaCarro (std::string modelo, std::string marca, int ano2, float kilometraje, std::string numdeserie) : Base(nombre, deducible, prestamo_max){}
    //uso de sets
    void setModelo(std::string modelo){
        this->modelo = modelo;
    }
    void setMarca(std::string marca){
        this->marca = marca;
    }
    void setNumdeserie(std::string numdeserie){
        this->numdeserie = numdeserie;
    }
    void setAno2(int ano2){
        this->ano2 = ano2;
    }
    void setkilometraje(float kilometraje){
        this->kilometraje = kilometraje;
    }
    //uso de gets
    std::string getModelo(){
        return this -> modelo;
    }
    std::string getMarca(){
        return this -> marca;
    }
    std::string getNumdeserie(){
        return this -> numdeserie;
    }
    int getAno2(){
        return this -> ano2;
    }
    float getKilometraje(){
        return this -> Kilometraje;
    }
private:
    std::string modelo;
    std::string marca;
    std::string numdeserie;
    int ano2;
    float kilometraje;
};
