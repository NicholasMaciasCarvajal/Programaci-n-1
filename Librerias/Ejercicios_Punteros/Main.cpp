#include <iostream>
int main() {
    int a;
    int * b = &a;
    a = 123;

    *b = 65;

    std::cout << a ;

    return 0;
}