#include <iostream>
#include "vector"

using namespace std;

vector<int> Reversed(const vector<int>& input)
{
    vector<int> result;
    for (int i = input.size() - 1; i >= 0; --i) {
        result.push_back(input[i]);
    }
    return result;
}

int main() {
    return 0;
}
