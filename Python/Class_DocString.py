class MyClass:
    '''This is my DocString
    Example of Class Variable a, Instance variable a
    Instantiation , Call function using object of class
    Display this DocString'''
    a = 10  # Class Variable

    def __init__(self):  # Class Constructor
        self.a = 100
        print("Instance variable a=", self.a)

    def func(self):  # Method in a class
        print('Hello')


# Display Class Variable
print("Using Class name Class Variable a=", MyClass.a)
Mc1 = MyClass()  # Instantiation
# Get address of func() method
print(MyClass.func)
Mc1.func()  # Function Call using Class Object Mc1
print(MyClass.__doc__)  # Prints the DocString
