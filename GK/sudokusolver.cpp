#include <bits/stdc++.h>
using namespace std;
#define N 9 

void printgrid(int grid[N][N]){
    for(int i=0;i<N;i++){
        for(int j=0;j,N;j++){
            cout << grid[i][j] << " ,";
        }
        cout << endl;
    }
}
bool issafe(int grid[N][N],int row,int col,int num){
    for(int i=0;i<N;i++){
        if(grid[row][i]==num){
            return false;
        }
    }
    for(int i=0;i<N;i++){
        if(grid[i][col]==num){
            return false;
        }
    }
    int start_row = row - row%3, start_col = col - col%3;
    
}


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

