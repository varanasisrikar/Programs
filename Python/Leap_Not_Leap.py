# Program to check if the given year is leap or not
Year = int(input("Enter the year:"))
if (Year % 4 == 0):
    print(Year, "is a leap year")
else:
    print(Year, "is not a leap year")
