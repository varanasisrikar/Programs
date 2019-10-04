p = int(input("Enter Physics Marks: "))
c = int(input("Enter Chemistry Marks: "))
m = int(input("Enter Maths Marks: "))
b = int(input("Enter Biology Marks:  "))
c = int(input("Enter Chemistry Marks:  "))
per = (p + c + m + b + c) / 5
print(per)
if(per >= 90):
    print("Grade A")
elif(per >= 80):
    print("Grade B")
elif(per >= 70):
    print("Grade C")
elif(per >= 60):
    print("Grade D")
elif(per >= 40):
    print("Grade E")
else:
    print("Grade F")
