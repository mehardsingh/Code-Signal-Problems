/* Several people are standing in a row and need to be
 * divided into two teams. The first person goes into team 1,
 * the second goes into team 2, the third goes into
 * team 1 again, the fourth into team 2, and so on.
 * You are given an array of positive integers - the weights of
 * the people. Return an array of two integers, where the first
 * element is the total weight of team 1, and the second element
 * is the total weight of team 2 after the division is complete. */

vector<int> alternatingSums(vector<int> a) {
    int team_a_sum = 0;
    int team_b_sum = 0;
    for (int i = 0; i < a.size(); i++) {
        if (i % 2 == 0) {
            team_a_sum += a[i];
        } else {
            team_b_sum += a[i];
        }
    }

    return vector<int> {team_a_sum, team_b_sum};
}