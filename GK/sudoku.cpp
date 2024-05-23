#include <iostream>
using namespace std;

#define N 9

// Hàm in lưới Sudoku
void printGrid(int grid[N][N]) {
    for (int row = 0; row < N; row++) {
        for (int col = 0; col < N; col++)
            cout << grid[row][col] << " ";
        cout << endl;
    }
}

// Hàm kiểm tra tính hợp lệ của số tại vị trí (row, col)
bool isSafe(int grid[N][N], int row, int col, int num) {
    // Kiểm tra trong hàng
    for (int x = 0; x < N; x++)
        if (grid[row][x] == num)
            return false;

    // Kiểm tra trong cột
    for (int x = 0; x < N; x++)
        if (grid[x][col] == num)
            return false;

    // Kiểm tra trong ô 3x3
    int startRow = row - row % 3, startCol = col - col % 3;
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            if (grid[i + startRow][j + startCol] == num)
                return false;

    return true;
}

// Hàm tìm vị trí trống trong lưới Sudoku
bool findEmptyLocation(int grid[N][N], int &row, int &col) {
    for (row = 0; row < N; row++)
        for (col = 0; col < N; col++)
            if (grid[row][col] == 0)
                return true;
    return false;
}

// Hàm giải Sudoku sử dụng backtracking
bool solveSudoku(int grid[N][N]) {
    int row, col;

    // Nếu không còn vị trí trống, nghĩa là đã giải xong
    if (!findEmptyLocation(grid, row, col))
        return true;

    // Thử các số từ 1 đến 9
    for (int num = 1; num <= 9; num++) {
        // Nếu có thể đặt num vào (row, col)
        if (isSafe(grid, row, col, num)) {
            // Đặt num vào (row, col)
            grid[row][col] = num;

            // Gọi đệ quy để giải phần tiếp theo của lưới
            if (solveSudoku(grid))
                return true;

            // Nếu không thể giải tiếp, gán lại vị trí này bằng 0
            grid[row][col] = 0;
        }
    }
    return false; // Kích hoạt backtracking
}

// Hàm chính
int main() {
    int grid[N][N] = {
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

    if (solveSudoku(grid))
        printGrid(grid);
    else
        cout << "Khong co loi giai hop le" << endl;

    return 0;
}
