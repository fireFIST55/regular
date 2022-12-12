#include <bits/stdc++.h>
using namespace std;
const int N = 105;
int n;
int board[N][N];
void printSolution(int board[N][N]){
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++)
            cout << " " << board[i][j] << " ";
        printf("\n");
    }
}
bool isSafe(int board[N][N], int row, int col){
    int i, j;
    for (i = 0; i < col; i++)
        if (board[row][i])
            return false;
  
    for (i = row, j = col; i >= 0 && j >= 0; i--, j--)
        if (board[i][j])
            return false;
  
    for (i = row, j = col; j >= 0 && i < N; i++, j--)
        if (board[i][j])
            return false;
    return true;
}
bool solveNQUtil(int board[N][N], int col){
    if (col >= n)   return true;
    for (int i = 0; i < n; i++) {
        if (isSafe(board, i, col)) {
            board[i][col] = 1;
  
            if (solveNQUtil(board, col + 1))
                return true;
            board[i][col] = 0;
        }
    }
    return false;
}
bool solve(){
    int n; cin >> n;
    for(int i = 0; i < n; i += 1){
        for(int j = 0; j < n; j += 1) board[i][j] = 0;
    }
    if (solveNQUtil(board, 0) == false) {
        cout << "No solution";
        return false;
    }
    printSolution(board);
    return true;
}
  
int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);

    int t = 1;
    //cin >> t;

    while(t--)
        solve();
    
    return 0;
}
