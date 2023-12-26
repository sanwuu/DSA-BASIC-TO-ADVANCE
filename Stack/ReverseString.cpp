#include<iostream>
#include<stack>

using namespace std;

int main() {
    string str;
    cin >> str;

    // Stack to reverse the string
    stack<char> st;

    // Loop to push characters onto the stack
    for (char ch : str) {
        st.push(ch);  
    }

    // Loop to print the reversed string
    while (!st.empty()) {
        cout << st.top();
        st.pop();
    }

    return 0;
}
