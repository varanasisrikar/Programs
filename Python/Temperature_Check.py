Temperature = int(input("Enter the Temperature:"))
if(Temperature <= 0):
    print("Warning! Low Temperature")
elif(Temperature > 0 and Temperature < 35):
    print("Temperature is okay")
else:
    print("Warning! High Temperature")
