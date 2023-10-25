#include <iostream>
#include <string>
using namespace std;
int main() {
    string a, b;
    cout << "Enter the sentence: \n";
    getline(cin, a);
    cout << "Enter a word to find: \n";
    cin >> b;
    size_t find = a.find(b);
    if (find != string::npos) {
        cout << find;
    }
};
