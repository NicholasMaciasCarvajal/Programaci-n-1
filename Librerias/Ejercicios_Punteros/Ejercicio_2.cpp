#include <iostream>

int main(){
    int a[] = {1,5,6,2,3};
    int * ptr;
    ptr = a;
    for (int i = 0; i < 5; i++){
        std::cout << *ptr << std::endl;
        ptr ++;
    }

    return 0;
};