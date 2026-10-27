class Solution:
    def createGrid(self, m: int, n: int) -> list[str]:
        
        op = [['#' for i in range(n)] for i in range(m)]

        for i in range(m):
            op[i][0] = '.'
        
        for j in range(n):
            op[m-1][j] = '.'

        final = []
        for i in op:
            final.append("".join(i))
        
        return final
        