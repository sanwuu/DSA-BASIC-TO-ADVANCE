#include<iostream>
#include<stack>

using namespace std;
//two pointer appraoch but its better in terms of space 
//complexities , but both have O(n) time complexities
// void reversePointer(string &s){
    
//     int r = s.length()-1;
//     int l=0;
//     while(l<=r){
//         swap(s[l],s[r]);
//         l++;
//         r--;
//     }
// }

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
    // reversePointer(str);
    // cout<<str;
    return 0;
}
