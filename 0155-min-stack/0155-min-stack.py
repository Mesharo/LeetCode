class MinStack:
    def __init__(self):
        self.storage = []
        self.min = 2147483648 # 2^31

    def push(self, val: int) -> None:
        if not self.storage:
            self.storage.append([val, val])
            return
        if self.storage[-1][1] > val:
            self.storage.append([val, val])
        else:
            self.storage.append([val, self.storage[-1][1]])

    def pop(self) -> None:
        self.storage.pop()

    def top(self) -> int:
        return self.storage[-1][0]

    def getMin(self) -> int:
        return self.storage[-1][1]
