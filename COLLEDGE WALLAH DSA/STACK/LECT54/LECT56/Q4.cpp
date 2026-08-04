//EVALUATION OF INFIX EXPRESSION
//T.C = O(n) S.C = O(n)
#include <iostream>
#include <stack>
#include <math.h>
using namespace std;

int calc(int v1, int v2, char op) {
    if (op == '^') {
        return pow(v1, v2);
    }
    if (op == '*') {
        return v1 * v2;
    }
    if (op == '/') {
        if (v2 == 0) {
            cout << "Error: Division by zero.\n";
            exit(1);
        }
        return v1 / v2;
    }
    if (op == '+') {
        return v1 + v2;
    }
    return v1 - v2;
}

int precedence(char ch) {
    if (ch == '^') return 3;
    else if (ch == '*' || ch == '/') return 2;
    else if (ch == '+' || ch == '-') return 1;
    else return -1;
}

int eval(string &str) {
    stack<int> nums;
    stack<char> ops;

    for (int i = 0; i < str.size(); i++) {
        if (isdigit(str[i])) {
            // Handle multi-digit numbers
            int num = 0;
            while (i < str.size() && isdigit(str[i])) {
                num = num * 10 + (str[i] - '0');
                i++;
            }
            i--;  // Adjust the index after the inner loop
            nums.push(num);
        } 
        else if (str[i] == '(') {
            ops.push('(');
        } 
        else if (str[i] == ')') {
            while (!ops.empty() && ops.top() != '(') {
                char op = ops.top();
                ops.pop();
                int v2 = nums.top(); nums.pop();
                int v1 = nums.top(); nums.pop();
                nums.push(calc(v1, v2, op));
            }
            if (!ops.empty()) ops.pop();  // Pop the '('
        } 
        else {
            while (!ops.empty() && precedence(ops.top()) >= precedence(str[i])) {
                char op = ops.top();
                ops.pop();
                int v2 = nums.top(); nums.pop();
                int v1 = nums.top(); nums.pop();
                nums.push(calc(v1, v2, op));
            }
            ops.push(str[i]);
        }
    }

    // Process remaining operators in the stack
    while (!ops.empty()) {
        char op = ops.top();
        ops.pop();
        int v2 = nums.top(); nums.pop();
        int v1 = nums.top(); nums.pop();
        nums.push(calc(v1, v2, op));
    }

    return nums.top();
}

int main() {
    string str = "1+(2*(3-1))+2";
    cout << eval(str) << endl;
    return 0;
}
