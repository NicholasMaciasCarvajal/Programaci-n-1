#include <iostream>

int main() {

    const char* men = "Hello World / ";
    std::cout << men;
    for (int i = 0; i < 11; i++){
        std::cout << *men ;
        men++;
    }
};