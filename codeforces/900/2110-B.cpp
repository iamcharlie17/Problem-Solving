#include <iostream>
#include <stack>

using namespace std;
int checkBalance(const string& s) {
    stack<char> st;

    for (char c : s) {
        if (c == '(') {
            st.push(c);
        } else {
            if (st.empty()) return 0;
            st.pop();
        }
    }
    return st.empty();
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string s;
        cin >> s;

        s.erase(0, 1);
        s.erase(s.size() - 1, 1);

        cout << (!checkBalance(s) ? "YES" : "NO") << endl;
        
    }
    return 0;
}