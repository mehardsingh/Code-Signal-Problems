/* Ratiorg got statues of different sizes as a present from
 * CodeMaster for his birthday, each statue having an non-negative integer size.
 * Since he likes to make things perfect, he wants to arrange them from smallest
 * to largest so that each statue will be bigger than the previous one exactly by 1.
 * He may need some additional statues to be able to accomplish that.
 * Help him figure out the minimum number of additional statues needed. */

int findLargestNum(vector<int>& statues) {
    int largest_num = statues[0];

    for (size_t index = 1; index < statues.size(); index++) {
        if (statues[index] > largest_num) {
            largest_num = statues[index];
        }
    }

    return largest_num;
}

int findSmallestNum(vector<int>& statues) {
    int smallest_num = statues[0];

    for (size_t index = 1; index < statues.size(); index++) {
        if (statues[index] < smallest_num) {
            smallest_num = statues[index];
        }
    }

    return smallest_num;
}

int makeArrayConsecutive2(vector<int> statues) {
    return findLargestNum(statues) - findSmallestNum(statues) - statues.size() + 1;
}


