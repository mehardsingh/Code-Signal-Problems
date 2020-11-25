bool areValid(const vector<string>& str_nums) {
    if (str_nums.size() != 4) {
        return false;
    }

    for (string s : str_nums) {
        if (s.empty()) {
            return false;
        }

        if (s.size() != 1 && s[0] == '0') {
            return false;
        }

        for (char c : s) {
            if (!isdigit(c)) {
                return false;
            }
        }

        try {
            int num = stoi(s);
            if (num < 0 || num > 255) {
                return false;
            }
        } catch (out_of_range) {
            return false;
        }
    }
    return true;
}

bool isIPv4Address(string inputString) {
    vector<string> str_nums;
    int period_index = 0;

    for (int i = 0; i < inputString.size(); i++) {
        if (inputString[i] == '.') {
            str_nums.push_back(inputString.substr(period_index, i - period_index));
            period_index = i + 1;
        }
    }
    str_nums.push_back(inputString.substr(period_index));

    return areValid(str_nums);
}