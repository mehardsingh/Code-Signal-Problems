/* Given an array of integers, find the pair of adjacent elements that
 * has the largest product and return that product. */

int adjacentElementsProduct(vector<int> inputArray) {
    int largest_prod = inputArray[0] * inputArray[1];

    for (size_t index = 1; index < inputArray.size() - 1; index++) {
        int new_prod = inputArray[index] * inputArray[index + 1];

        if (new_prod > largest_prod) {
            largest_prod = new_prod;
        }
    }

    return largest_prod;
}
