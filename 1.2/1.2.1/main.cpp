#include <iostream>

int Factorial(int x) {
    int result = 1;
    for (int i = 2; i <= x; ++i) {
        result *= i;
    }
    return result;
}


int main () {
    int x;
    std::cin >> x;
    std::cout << Factorial(x);
}

