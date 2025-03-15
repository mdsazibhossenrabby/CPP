#include <iostream>
#include <algorithm> // For sort()
using namespace std;

string Ascending() {
    string s;

    cout << "Enter a string: ";
    getline(cin >> ws, s);

    string NoSpaceStr;

    for(char ch:s){
        if(ch!=' ')
            NoSpaceStr+=ch;
    }

    // Sort the string in ascending order
    sort(NoSpaceStr.begin(), NoSpaceStr.end());

    return NoSpaceStr;
}

int main() {

    string str = Ascending();

    cout << "Sorted string: " << str << endl;

    return 0;
}
