#include <iostream>
#include "string"
#include "vector"
#include "map"

using namespace std;

int main() {
    int n = 0, i = 0;
    string stop;
    map<vector<string>, int> bus_stops;

    cin >> n;

    for (n; n > 0; n--) {
        cin >> i;
        vector<string> result;
        for (int z = 0; z < i; z++) {
            cin >> stop;
            result.push_back(stop);
        } if (bus_stops.count(result)) {
            cout << "Already exists for " << bus_stops[result] << endl;
        } else {
            bus_stops[result];
            int r = bus_stops.size();
            bus_stops[result] = r;
            cout << "New bus " << bus_stops[result] << endl;
        }
    }

    return 0;
}
