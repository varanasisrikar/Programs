Days=int(input("Enter the no of Days:"))
if (Days==28 or Days==29):
    print("February")
if(Days==30):
    print("January,April,June,September,November")
elif(Days==31):
    print("March,May,July,August,October,December")
else:
    print("Invalid input")
    
    
