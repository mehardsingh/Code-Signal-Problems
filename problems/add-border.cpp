/* Given a rectangular matrix of characters, add a border of asterisks(*) to it. */

vector<string> addBorder(vector<string> picture) {
    int width = picture[0].size();
    int length = picture.size();

    vector<string> matrix;
    for (int i = 0; i < length + 2; i++) {
        if (i == 0 || i == length + 1) {
            string border;
            for (int j = 0; j < width + 2; j++) {
                border += '*';
            }
            matrix.push_back(border);
        } else {
            string row = "*" + picture[i - 1] + '*';
            matrix.push_back(row);
        }
    }

    return matrix;
}
