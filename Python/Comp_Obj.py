class Complex:
    i=0
    r=0
    def __init__(self,realpart,imagpart):
        self.r=realpart
        self.i=imagpart
compObj=Complex(3.0,-4.5)
compObj1=Complex(20,-5.5)
print("Real Part",compObj.r,"Imaginary Part",compObj.i)
print("Real Part",compObj1.r,"Imaginary Part",compObj1.i)
