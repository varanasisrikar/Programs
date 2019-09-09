c = input("enter char:")
if((c >= 'A' and c <= 'Z') or (c >= 'a' and c <= 'z')):
    print("alphabet")
elif(c >= '0' and c <= '9'):
    print("digit")
else:
    print("special character")
