#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;     

        vector<int> freq(26, 0);

        for(char c : s) freq[c - 'a']++;

        char maxChar = 'a';

        for(int i = 0; i<26; i++) {
            if(freq[i] > freq[maxChar - 'a']) {
                maxChar = 'a' + i;
            }
        }

        for(int i = 0; i<n; i++) {
            if(s[i] != maxChar) {
                s[i] = maxChar;
                break;
            }
        }

        

        cout << s << endl;
    }
    return 0;
}