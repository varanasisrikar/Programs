class test:
    n = 1

    def __init__(self):
        print("Constructor called. Value of n:",
              self.n, "n data type:", type(self.n))
        self.n = 111.56
        val = 200
        print("In constructor. n modified with 111.56")
        print("In constructor. n:", self.n, "n data type:", type(self.n))
        print("Value in instance variable:", val)


tst = test()
