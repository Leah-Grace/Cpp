#include <iostream>

using namespace std;

int main() {
        int a;
        int b;
        cout << "Enter value for a";
        cin >> a;
        cout << "Enter value for b";
        cin >> b;
        int tempB = b;
        b = a;
        a = tempB;
        cout << a;
        cout << b;
        return 0;
    }





