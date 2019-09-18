n = int(input("Enter the Number:"))
if n > 1:
    for i in range(2, n):
        if(n % i) == 0:
            print(n, "is not a Prime Number")
            print(i, "times", n // i, "is", n)
            break
    else:
        print(n, "is a Prime Number")
