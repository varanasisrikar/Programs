# The program to find if a number is divisible by 5 and 11
n = int(input('Enter the number:'))
if(n % 5 == 0 and n % 11 == 0):
    print(n, "is divisible by 5 and 11")
else:
    print(n, "is not divisible by 5 and 11")
