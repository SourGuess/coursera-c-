#include <iostream>
#include "vector"

using namespace std;

int main() {
    vector<int> result;
    int n, z = 0, middle, count = 0;
    cin >> n;

    vector<int> days(n);
    for (int& s : days) {
        cin >> s;
    }

    for (auto s : days) {
        count += s;
    }

    middle = count / n;

    for (int i = 0; i < days.size(); i++) {
        if (days[i] > middle) {
            z++;
            result.push_back(i);
        }
    }

    cout << z << endl;

    for (int& number : result) {
        cout << number << " ";
    }

    return 0;
}
