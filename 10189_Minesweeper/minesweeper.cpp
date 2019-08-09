#include <iostream>
#include <vector>

using namespace std;

void increaseSquares(vector<vector<int> > &field, int row, int col){
    // adjust rows so no seg fault
    int endR = row + 1, endC = col + 1;
    if (row != 0) {
        --row;
        if (endR == field.size()) --endR;
    }
    if (col != 0) {
        --col;
        if (endC == field[0].size()) --endC;
    }
    // increase rows by 1
    for (int r = row; r <= endR; ++r){
        for (int c = col; c <= endC; ++c){
            if (field[r][c] != -1){
                ++field[r][c];
            }
        }
    }
}

int main() {

    int m, n, fieldNum = 0;

    while (cin >> n >> m, m && n){
        ++fieldNum;

        vector<vector<int> > field(n, vector<int>(m, 0));

        // Build field
        for (int r = 0; r < n; ++r){
            string line;
            cin >> line;
            for (int c = 0; c < m; ++c){
                // use (-1) as indicator of a mine
                if (line[c] == '*') {
                    field[r][c] = -1;
                    increaseSquares(field, r, c);
                }
            }
        }

        // print
        if (fieldNum != 1) cout << endl;
        cout << "Field #" << fieldNum << ":" << endl;
        for (int r = 0; r < field.size(); ++r){
            for (int c = 0; c < field[r].size(); ++c){
                if (field[r][c] == -1) cout << "*";
                else cout << field[r][c];
            }
            cout << endl;
        }
    }

    return 0;
}