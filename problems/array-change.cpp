/* You are given an array of integers. On each move
 * you are allowed to increase exactly one of its element by one.
 * Find the minimal number of moves required to obtain a strictly
 * increasing sequence from the input. */

int arrayChange(vector<int> inputArray) {
    int sum = 0;
    for (int i = 0; i < inputArray.size() - 1; i++) {
        if (inputArray[i] < inputArray[i + 1]) {
            continue;
        }

        while (inputArray[i + 1] <= inputArray[i]) {
            sum += 1;
            inputArray[i + 1] += 1;
        }
    }

    return sum;
}
