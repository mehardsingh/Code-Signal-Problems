/* Write a function that reverses characters in (possibly nested)
 * parentheses in the input string.
 * Input strings will always be well-formed with matching ()s.*/

int count(const string& inputString) {
    int count = 0;
    for (char c : inputString) {
        if (c == '(') {
            count++;
        }
    }
    return count;
}

int getIndexFirstP(const string& inputString) {
    int num_p = count(inputString);
    int count_p = 0;
    int i;
    for (i = 0; i < inputString.size(); i++) {
        if (inputString.at(i) == '(') {
            count_p++;
        }

        if (count_p == num_p) {
            return i;
        }
    }

    return -1;
}

int getIndexSecondP(const string& inputString, const int first_p_index) {
    int i;
    for (i = first_p_index; i < inputString.size(); i++) {
        if (inputString.at(i) == ')') {
            return i;
        }
    }

    return -1;
}

string reverseInParentheses(string inputString) {
    int first_p_index = getIndexFirstP(inputString);
    int second_p_index = getIndexSecondP(inputString, first_p_index);

    if (first_p_index == -1 || second_p_index == -1) {
        return inputString;
    }

    string left;
    for (int i = 0; i < first_p_index; i++) {
        left += inputString.at(i);
    }

    string middle;
    for (int i = second_p_index - 1; i > first_p_index; i--) {
        middle += inputString.at(i);
    }

    string right;
    for (int i = second_p_index + 1; i < inputString.size(); i++) {
        right += inputString.at(i);
    }

    return reverseInParentheses(left + middle + right);
}