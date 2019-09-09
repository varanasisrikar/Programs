class Test:
    n = 1

    def __init__(self):
        print("In constructor", self.n)

    def disp(self, val):
        self.n = val
        print("disp called", self.n)


T4 = Test()
T4.disp(10)
