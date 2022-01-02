#include <iostream>
#include "vector"
#include "string"

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<bool> angry;

    for (int i = 0; i < n; i++) {
        string command;
        int count;
        cin >> command;

        if (command == "WORRY_COUNT") {
            int counts = 0;
            for (auto person : angry) {
                if (person) {
                    counts++;
                }
            }

            cout << counts << endl;

        } else {
            cin >> count;
            if (command == "WORRY") {
                angry[count] = true;
            } else if (command == "QUIET") {
                angry[count] = false;
            } else if (command == "COME") {
                int query_size = angry.size();
                angry.resize(query_size + (count));
            }
        }
    }
}
