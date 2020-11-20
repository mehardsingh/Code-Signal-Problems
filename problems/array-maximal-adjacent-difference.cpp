/* Given an array of integers, find the maximal absolute difference
 * between any two of its adjacent elements. */

int arrayMaximalAdjacentDifference(vector<int> inputArray) {
    int largest_diff = inputArray[1] - inputArray[0] < 0;
    if (largest_diff < 0) {
        largest_diff *= -1;
    }

    for (int i = 0; i < inputArray.size() - 1; i++) {
        int diff = inputArray[i + 1] - inputArray[i];

        if (diff < 0) {
            diff *= -1;
        }

        if (diff > largest_diff) {
            largest_diff = diff;
        }
    }

    return largest_diff;
}
