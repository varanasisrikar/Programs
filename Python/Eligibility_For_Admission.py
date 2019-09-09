#Program to find the if a student is eligible for admission or not
Maths=int(input("Enter the Maths Marks:"))
Physics=int(input("Enter the Physics Marks:"))
Chemistry=int(input("Enter the Chemistry Marks:"))
Total=Maths+Physics+Chemistry
if((Maths>=65 and Physics>=55 and Chemistry>=50) and (Total>180)):
    print("Eligible For Admission")
else:
     print("Not Eligible For Admission")
