#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    if (b == 0) {
        cout << "b cannot be equal zero" << endl;
    } else {
        cout << a / b << endl;
    }

    return 0;
}
