def is_valid_IP(strng):
    count = 0
    string = strng.split('.')
    for i in range(len(string)):
        if(string[i].isdecimal()):
            if(string[i].startswith('0') and len(string[i])==1):
                count += 1
            elif (not string[i].startswith('0') and int(string[i]) < 256 and int(string[i]) > 0):
                count +=1
    if(count==4):
        return True
    else:
        return False

x = is_valid_IP("12.255.056.01")
print(x)