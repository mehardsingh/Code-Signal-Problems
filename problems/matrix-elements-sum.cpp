/* After becoming famous, the CodeBots decided to move into
 * a new building together. Each of the rooms has a different cost,
 * and some of them are free, but there's a rumour that all the
 * free rooms are haunted! Since the CodeBots are quite superstitious,
 * they refuse to stay in any of the free rooms,
 * or any of the rooms below any of the free rooms.
 * Given matrix, a rectangular matrix of integers, where each value
 * represents the cost of the room, your task is to return the total
 * sum of all rooms that are suitable for the CodeBots (ie: add up all
 * the values that don't appear below a 0). */

void setCol(const vector<vector<int>>& matrix, vector<int>& col, const int col_num) {
    for (size_t row = 0; row < matrix.size(); row++) {
        col.push_back(matrix[row][col_num]);
    }
}

int evaluateCol(const vector<int> col) {
    int cost = 0;
    for (size_t row = 0; row < col.size(); row++) {
        if (col[row] == 0) {
            break;
        }
        cost += col[row];
    }

    return cost;
}

int matrixElementsSum(vector<vector<int>> matrix) {
    int tot_cost = 0;
    for (size_t col_num = 0; col_num < matrix[0].size(); col_num++) {
        vector<int> col;
        setCol(matrix, col, col_num);

        tot_cost += evaluateCol(col);
    }

    return tot_cost;
}
