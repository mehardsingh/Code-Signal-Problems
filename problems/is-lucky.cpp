/* Ticket numbers usually consist of an even number of digits.
 * A ticket number is considered lucky if the sum of the first
 * half of the digits is equal to the sum of the second half.
 * Given a ticket number n, determine if it's lucky or not. */

bool isLucky(int n) {
    string num_rep = to_string(n);
    vector<int> digits;
    for (char c : num_rep) {
        digits.push_back(c);
    }

    int first_half = 0;
    for (int i = 0; i < digits.size() / 2; i++) {
        first_half += digits[i];
    }

    int second_half = 0;
    for (int i = digits.size() / 2; i < digits.size(); i++) {
        second_half += digits[i];
    }

    return first_half == second_half;
}
