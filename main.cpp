#include <iostream>


int main() {
        int a = 1;
        int b = 2;
        int tempB = b;
        b = a;
        a = tempB;
        std::cout << a;
        std::cout << b;
        return 0;
    }





