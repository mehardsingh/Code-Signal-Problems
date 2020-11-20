/* Given an array of strings, return another array
 * containing all of its longest strings. */

int findLongestStringSize(const vector<string>& inputArray) {
    int size = inputArray[0].size();
    for (size_t index = 1; index < inputArray.size(); index++) {
        if (inputArray[index].size() > size) {
            size = inputArray[index].size();
        }
    }

    return size;
}

vector<string> allLongestStrings(vector<string> inputArray) {
    vector<string> longest_strings;

    int longest_size = findLongestStringSize(inputArray);
    for (size_t index = 0; index < inputArray.size(); index++) {
        if (inputArray[index].size() == longest_size) {
            longest_strings.push_back(inputArray[index]);
        }
    }

    return longest_strings;
}
