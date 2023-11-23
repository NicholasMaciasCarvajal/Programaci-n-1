#include <iostream>

void Mod(int * ptr){
    *ptr = 12;
}

int main(){
    int a;
    a = 42;
    Mod(&a);

    std::cout<< a <<std::endl;
    return 0;
}