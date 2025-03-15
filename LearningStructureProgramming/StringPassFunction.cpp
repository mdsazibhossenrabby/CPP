#include <iostream>
#include <algorithm> // For sort()
using namespace std;

string Ascending(int n) {
    string s;

    cout << "Enter a string: ";
    getline(cin >> ws, s);

    // Ensure the string does not exceed the specified size
    if (s.size() > n) {
        s = s.substr(0, n); // Truncate to 'n' characters
    }

    // Sort the string in ascending order
    sort(s.begin(), s.end());

    return s;
}

int main() {
    int n;
    cout << "Enter string size: ";
    cin >> n;

    string str = Ascending(n);

    cout << "Sorted string: " << str << endl;

    return 0;
}
