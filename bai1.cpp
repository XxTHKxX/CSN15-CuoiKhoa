#include <iostream>
#include <stack>
#include <string>
#include <vector>

using namespace std;

bool canbang(const string &s) {
    stack<char> st;

    for (char c : s) {
        if (c == '(' || c == '[' || c == '{') {
            st.push(c);
        } else if (c == ')' || c == ']' || c == '}') {
            if (st.empty() || abs(c - st.top()) > 2) {
                return false;
            }
            st.pop();
        }
    }

    return st.empty();
}

int main() {
    int N;
    cin >> N;

    vector<string> inputStrings(N);
    vector<bool> results(N);

    for (int i = 0; i < N; ++i) {
        cin >> inputStrings[i];
    }

    for (int i = 0; i < N; ++i) {
        results[i] = canbang(inputStrings[i]);
    }

    for (int i = 0; i < N; ++i) {
        if (results[i]) {
            cout << "true" << endl;
        } else {
            cout << "false" << endl;
        }
    }

    return 0;
}
