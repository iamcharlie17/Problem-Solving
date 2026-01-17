#include <iostream>

using namespace std;

int main() {
    string s;

    getline(cin, s);

    int isYes = 0;

    for(char c : s) {
        if(c == 'H' || c == 'Q' || c == '9') {
            isYes = 1;
            break;
        }
    }

    if(isYes) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}