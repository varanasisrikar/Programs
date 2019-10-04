h = int(input("enter h :"))
if(h > 195):
    print("enter valid height")
else:
    if(h >= 135 and h < 150):
        print("short")
    elif(h >= 150 and h <= 165):
        print("tall")
    elif(h >= 165 and h <= 195):
        print("taller")
    else:
        print("normal")
