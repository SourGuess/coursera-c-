#include <iostream>
#include "vector"
#include "string"

using namespace std;

int main() {
    int count_of_commands;
    cin >> count_of_commands;
    const vector<int> months = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int months_counter = 0;
    vector<vector<string>> current_month(months[months_counter]);

    for (int i = 0; i < count_of_commands; i++) {
        string command;
        int day = 0;
        string task;

        cin >> command;

        if (command == "NEXT") {
            months_counter++;
            if (months_counter > 11) {
                months_counter = 0;
            } else if (current_month.size() <= months[months_counter]) {
                    current_month.resize(months[months_counter]);
                } else {
                    while (current_month.size() > months[months_counter]) {
                        current_month[months[months_counter] - 1].insert(end(current_month[months[months_counter] - 1]),
                                                                         begin(current_month.back()),
                                                                         end(current_month.back()));
                        current_month.pop_back();
                    }
                }
        } else if (command == "ADD") {
            cin >> day;
            day--;
            cin >> task;
            current_month[day].push_back(task);
        } else if (command == "DUMP") {
            cin >> day;
            day--;
            cout << current_month[day].size() << " ";
            for (const string &v: current_month[day]) {
                cout << v << " ";
            }
            cout << endl;
        }
    }

    return 0;
}