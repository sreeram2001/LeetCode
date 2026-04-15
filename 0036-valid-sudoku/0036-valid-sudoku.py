class Solution:
    def isValidSudoku(self, board: List[List[str]]) -> bool:
        
        #check for rows:
        for i in range(len(board)):
            visited = set()
            for j in range(len(board[i])):
                if board[i][j] != ".":
                    if board[i][j] in visited:
                        return False
                    visited.add(board[i][j])

        #check for columns:
        for i in range(len(board)):
            visited = set()
            for j in range(len(board[i])):
                if board[j][i] != ".":
                    if board[j][i] in visited:
                        return False
                    visited.add(board[j][i])

        #check for grids:
        for i in range(0,9,3):
            for j in range(0,9,3):
                visited = set()
                for r in range(i,i+3):
                    for c in range(j,j+3):
                        if board[r][c] != ".":
                            if board[r][c] in visited:
                                return False
                            visited.add(board[r][c])

        return True