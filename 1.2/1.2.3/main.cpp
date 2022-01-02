#include "string"
#include "vector"

using namespace std;

bool IsPalindrom(string s) {
    for (int i = 0; i < s.size() / 2; ++i) {
        if (s[i] != s[s.size() - i - 1]) {
            return false;
        }
    }
    return true;
}

vector<string> PalindromFilter(const vector<string>& words, int minLength) {
    vector<string> result;

    for (const string& word : words) {
        if (word.size() >= minLength) {
            if (IsPalindrom(word)) {
                result.push_back(word);
            }
        }
    }

    return result;
};

int main() {
    vector<string> test = {"abacaba", "aba"};
    PalindromFilter(test, 4);
    return 0;
}
