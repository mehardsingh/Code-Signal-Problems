/* Given two strings, find the number of common characters between them. */

void setFreq(map<char, int>& freq, const string& str) {
    for (int i = 0; i < str.size(); i++) {
        if (freq.count(str.at(i)) == 0) {
            freq.insert(pair(str.at(i), 1));
        } else {
            freq[str.at(i)] = freq.at(str.at(i)) + 1;
        }
    }
}

int commonCharacterCount(string s1, string s2) {
    map<char, int> s1_freq;
    map<char, int> s2_freq;
    setFreq(s1_freq, s1);
    setFreq(s2_freq, s2);

    int comm_count = 0;
    for (auto pair : s1_freq) {
        if (s2_freq.count(pair.first) == 0) {
            continue;
        } else if (pair.second < s2_freq.at(pair.first)) {
            comm_count += pair.second;
        } else {
            comm_count += s2_freq.at(pair.first);
        }
    }

    return comm_count;
}
