#include <iostream>
#include <string>

//creación de la clase base
class Base {
public:
    Base(std::string nombre, std::string curp, int edad, int ano, float deducible, float prestamo_max){}
    //Uso de sets
    void setNombre(std::string nombre){
        this->nombre = nombre;
    };
    void setCurp(std::string curp){
        this->curp = curp;
    };
    void setEdad(int edad){
        this->edad = edad;
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
    friend class Poliza_Casa;
    std::string getBase() {
        return this -> nombre;
        return this -> curp;
        return this -> edad;
        return this -> ano;
    }
    friend class Poliza_Vida;

    friend class Poliza_Carro;

};
//creacion de la clase poliza de casa

//creacion de la clase poliza de vida

//creacion de la clase poliza de carro