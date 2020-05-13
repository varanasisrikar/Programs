def is_valid_IP(strng):
    count = 0
    string = strng.split(".")
    for i in range(len(string)):
        if string[i].isdecimal() and int(string[i]) < 255 and int(
                string[i]) > 0:
            count += 1
    if count == 4:
        return True
    else:
        return False


x = is_valid_IP("12.255.56.1")
