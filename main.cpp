#include <iostream>


int main() {
        int a;
        int b;
        std::cout << "Enter value for a";
        std::cin >> a;
        std::cout << "Enter value for b";
        std::cin >> b;
        int tempB = b;
        b = a;
        a = tempB;
        std::cout << a;
        std::cout << b;
        return 0;
    }





