Temp = float(input("Enter the Temperature:"))
if(Temp < 0):
    print("Freezing weather")
if(Temp > 0 and Temp < 10):
    print("Very Cold weather")
if(Temp > 10 and Temp < 20):
    print("Cold weather")
if(Temp > 20 and Temp < 30):
    print("Normal")
if(Temp > 30 and Temp < 40):
    print("Its Hot")
if(Temp >= 40):
    print("Its very hot")
