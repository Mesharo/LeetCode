class SubrectangleQueries:
    def __init__(self, rectangle: List[List[int]]):
        self.grid = rectangle  

    def updateSubrectangle(self, row1: int, col1: int, row2: int, col2: int, newValue: int) -> None:
        for x in range(row1, row2 + 1):
            for y in range(col1, col2 + 1):
                self.grid[x][y] = newValue
        """
        while row1 <= row2:
            while col1 <= col2:
                self.grid[row1][col1] = newValue
                col1 += 1
                self.count += 1
            row1 += 1
            col1 -= self.count
            self.count = 0  
        """
    
    def getValue(self, row: int, col: int) -> int:
        return self.grid[row][col]