#include <iostream>
#include <string>
#include <stack>
using namespace std;

bool check_bracket(string input) {
    stack<char>st;
    for (auto c : input) {
        switch (c) {
            case '(':
            case '[':
            case '{': {
                st.push(c);
                break;
            }
            case ')': {
                if (st.top() != '(') {
                    return false;
                }
                else { st.pop(); }
                break;
            }
            case ']': {
                if (st.top() != '[') {
                    return false;
                }
                else { st.pop(); }
                break;
            }
            case '}': {
                if (st.top() != '{') {
                    return false;
                }
                else { st.pop(); }
                break;
            }
        }
    }
    return true;
}

int main() {
    char str1 [] = "{[()][]})";
    char str2 [] = "[{}[()]]";
    char str3 [] = "{[]()}";
    bool res1 = check_bracket(str1);
    bool res2 = check_bracket(str2);
    bool res3 = check_bracket(str3);

    cout<<str1<<"\t Result: "<<res1<<endl;
    cout<<str2<<"\t Result: "<<res2<<endl;
    cout<<str3<<"\t Result: "<<res3<<endl;
}