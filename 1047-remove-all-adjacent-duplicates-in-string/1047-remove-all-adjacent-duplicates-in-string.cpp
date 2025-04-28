class Solution {
public:
    string removeDuplicates(string s) {
        stack<char> st;

    for (int i = 0; i < s.length(); i++) {
        if (!st.empty() && st.top() == s[i]) {
            st.pop();  // remove the previous character because it's same as current
        }
        else {
            st.push(s[i]);  // push current character
        }
    }

    // Now stack contains final characters but in reverse order
    string result = "";
    while (!st.empty()) {
        result = st.top() + result;  // add top element to front of result
        st.pop();
    }

    return result;
}

int main() {
    string s;
    cout << "Enter your string: ";
    cin >> s;

    string finalResult = removeDuplicates(s);
    cout << "Final string after all duplicate removals: " << finalResult << endl;

    return 0;
    }
};