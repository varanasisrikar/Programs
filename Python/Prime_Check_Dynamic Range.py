Lower = int(input("Enter the Lower Number:"))
Upper = int(input("Enter the Upper Number:"))
for i in range(Lower, Upper):
    if(n % i) == 0:
        print(n, "is not a Prime Number")
        print(i, "times", n // i, "is", n)
        break
else:
    print(n, "is a Prime Number")
