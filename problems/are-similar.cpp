/* Two arrays are called similar if one can be obtained
 * from another by swapping at most one pair of
 * elements in one of the arrays.
 * Given two arrays a and b, check whether they are similar. */

bool areSimilar(vector<int> a, vector<int> b) {
    vector<int> diff_indices;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            diff_indices.push_back(i);
        }
    }

    if (diff_indices.size() == 0) {
        return true;
    }

    if (diff_indices.size() != 2) {
        return false;
    }

    if (a[diff_indices[0]] != b[diff_indices[1]]) {
        return false;
    }

    if (a[diff_indices[1]] != b[diff_indices[0]]) {
        return false;
    }

    return true;
}
