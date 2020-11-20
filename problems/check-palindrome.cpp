/* Given the string, check if it is a palindrome */

bool checkPalindrome(string inputString) {
    for (size_t index = 0; index < inputString.size(); index++) {
        if (inputString.at(index) != inputString.at(inputString.size() - index - 1)) {
            return false;
        }
    }

    return true;
}
