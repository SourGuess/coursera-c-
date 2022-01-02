#include <iostream>
#include "vector"
#include "string"

using namespace std;

void MoveStrings(vector<string>& source, vector<string>& destination) {
    for (string& word : source) {
        destination.push_back(word);
    }
    source.clear();
}

int main() {
    return 0;
}
