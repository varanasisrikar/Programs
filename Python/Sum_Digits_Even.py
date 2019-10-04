n = int(input("Enter Num:"))
se = 0
t = n
while(n != 0):
    r = n % 10
if(r % 2 == 0):
    se = se + r
    n = n // 10
print("Sum =", se)
