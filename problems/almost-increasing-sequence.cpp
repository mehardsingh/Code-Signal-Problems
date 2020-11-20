/* Given a sequence of integers as an array, determine whether
 * it is possible to obtain a strictly increasing sequence by
 * removing no more than one element from the array.
 * Note: sequence a0, a1, ..., an is considered to be a strictly
 * increasing if a0 < a1 < ... < an. Sequence containing only one
 * element is also considered to be strictly increasing. */

bool isIncreasing(vector<int>& sequence) {
    for (size_t index = 0; index < sequence.size() - 1; index++) {
        if (sequence[index] >= sequence[index + 1]) {
            return false;
        }
    }

    return true;
}

void setVectorMinus(const vector<int>& sequence, vector<int>& new_vec, int erase_index) {
    for (size_t index = 0; index < sequence.size(); index++) {
        if (index == erase_index) {
            continue;
        }

        new_vec.push_back(sequence[index]);
    }
}

bool almostIncreasingSequence(vector<int> sequence) {
    vector<int> option_1;
    vector<int> option_2;

    for (size_t index = 0; index < sequence.size() - 1; index++) {
        if (sequence[index] >= sequence[index + 1]) {
            setVectorMinus(sequence, option_1, index);
            setVectorMinus(sequence, option_2, index + 1);
            break;
        }
    }

    return isIncreasing(option_1) || isIncreasing(option_2);
}
