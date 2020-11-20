/* Given a string, find out if its characters can
 * be rearranged to form a palindrome. */

bool palindromeRearranging(string inputString) {
    map<char, int> freq;
    for (int i = 0; i < inputString.size(); i++) {
        if (freq.count(inputString.at(i) == 0)) {
            freq.insert(pair(inputString.at(i), 1));
        } else {
            freq[inputString.at(i)] += 1;
        }
    }

    int num_odd = 0;
    for (auto pair : freq) {
        if (pair.second % 2 != 0) {
            num_odd += 1;
        }
    }

    return num_odd <= 1;
}

