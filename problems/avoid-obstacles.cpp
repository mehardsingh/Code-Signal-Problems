int avoidObstacles(vector<int> inputArray) {
    bool is_valid = true;
    int hop = 2;

    do {
        is_valid = true;
        for (int i : inputArray) {
            if (i % hop == 0) {
                hop++;
                is_valid = false;
                break;
            }
        }
    } while (!is_valid);

    return hop;
}
