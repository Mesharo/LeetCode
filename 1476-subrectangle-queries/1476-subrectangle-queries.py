class SubrectangleQueries:
    def __init__(self, rectangle: List[List[int]]):
        self.grid = rectangle  
        self.count = 0

    def updateSubrectangle(self, row1: int, col1: int, row2: int, col2: int, newValue: int) -> None:
        while row1 <= row2:
            while col1 <= col2:
                self.grid[row1][col1] = newValue
                col1 += 1
                self.count += 1
            row1 += 1
            col1 -= self.count
            self.count = 0                
    
    def getValue(self, row: int, col: int) -> int:
        return self.grid[row][col]
        

# Your SubrectangleQueries object will be instantiated and called as such:
# obj = SubrectangleQueries(rectangle)
# obj.updateSubrectangle(row1,col1,row2,col2,newValue)
# param_2 = obj.getValue(row,col)