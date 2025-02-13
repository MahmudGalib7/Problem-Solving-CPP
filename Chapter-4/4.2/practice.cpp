#include <iostream>
#include <vector>
using namespace std;

#define N 9

class SudokuSolver {
public:
    void printGrid(vector<vector<int>>& grid) {
        for (int row = 0; row < N; row++) {
            for (int col = 0; col < N; col++) {
                cout << grid[row][col] << " ";
            }
            cout << endl;
        }
    }

    bool isSafe(vector<vector<int>>& grid, int row, int col, int num) {
        // Row and column check
        for (int x = 0; x < N; x++) {
            if (grid[row][x] == num || grid[x][col] == num)
                return false;
        }

        // Sub-grid check
        int startRow = row - row % 3, startCol = col - col % 3;
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                if (grid[i + startRow][j + startCol] == num)
                    return false;
            }
        }
        return true;
    }

    bool solveSudoku(vector<vector<int>>& grid, int row, int col) {
        // If we have reached the 9th row and 9th column, we're done
        if (row == N - 1 && col == N)
            return true;

        // If column reaches 9, move to the next row
        if (col == N) {
            row++;
            col = 0;
        }

        // If the current position is already filled, move to the next column
        if (grid[row][col] != 0)
            return solveSudoku(grid, row, col + 1);

        // Try numbers 1-9 for the empty spot
        for (int num = 1; num <= 9; num++) {
            if (isSafe(grid, row, col, num)) {
                grid[row][col] = num;

                if (solveSudoku(grid, row, col + 1))
                    return true;
            }

            // If placing the number doesn't lead to a solution, backtrack
            grid[row][col] = 0;
        }
        return false;
    }
};

int main() {
    // Initial grid with some numbers filled in
    vector<vector<int>> grid = {
        {5, 3, 0, 0, 7, 0, 0, 0, 0},
        {6, 0, 0, 1, 9, 5, 0, 0, 0},
        {0, 9, 8, 0, 0, 0, 0, 6, 0},
        {8, 0, 0, 0, 6, 0, 0, 0, 3},
        {4, 0, 0, 8, 0, 3, 0, 0, 1},
        {7, 0, 0, 0, 2, 0, 0, 0, 6},
        {0, 6, 0, 0, 0, 0, 2, 8, 0},
        {0, 0, 0, 4, 1, 9, 0, 0, 5},
        {0, 0, 0, 0, 8, 0, 0, 7, 9}
    };

    SudokuSolver solver;

    if (solver.solveSudoku(grid, 0, 0))
        solver.printGrid(grid);
    else
        cout << "No solution exists" << endl;

    return 0;
}

