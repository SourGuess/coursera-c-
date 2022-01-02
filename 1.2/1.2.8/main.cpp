#include <cmath>
#include <cstdio>
#include <iostream>

double f(double x) {
    return sqrt(9 - x * x) / (x * x);
}

double Integration(double a, double b, int n, char* wayToCaluclate) {
    double h = (b - a) / n;
    double sum = 0.0;

    int i;
    double x;

    if (wayToCaluclate == "Left quad") {
        for (i = 1, x = a; i <=n; i++, x+=h){
            sum+= f(x);
        }
        sum *= h;
    }else if (wayToCaluclate == "Central quad"){
        for (i = 1, x = a+h/2.0; i <= n; i++, x += h) {
            sum += f(x);
        }
        sum *= h;
    }else if (wayToCaluclate == "Right quad") {
        for (i = 1, x = a + h; i <= n; i++, x += h) {
            sum += f(x);
        }
        sum *= h;
    }else if (wayToCaluclate == "Trapece") {
        sum += (f(a) + f(b)) / 2.0;
        for (i = 1, x = a + h; i <= n-1; i++, x += h) {
            sum += f(x);
        }
        sum *= h;
    }else if (wayToCaluclate == "Parabols") {

    }
    return sum;
}

int main()
{
    setlocale(0, "");
    int n = 5;
    double result;
    result = Integration(0.5, 3.0, n, "Left quad");
    printf("Left quad: %.4f\n", result);

    printf("Console!");
    return 0;
}