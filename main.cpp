#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>

using namespace std;

int main() {
    const short lowerLimit = 1;
    const short upperLimit = 6;
    const short one = 1;

    srand(time(0));
    int dice1 = (rand() % (upperLimit - lowerLimit + one)) + one;
    int dice2 = (rand() % (upperLimit - lowerLimit + one)) + one;
    cout << "You rolled " << dice1 << " and " << dice2;




   // int dice2 = 0;
    //int total = dice1 + dice2;


    //cout << "You have rolled a  " << dice1 << " and a " << dice2 << " for a total of " << total;

        return 0;
    }





