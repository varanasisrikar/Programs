str = input("Enter the String")
char = str[0]
str1 = str.replace(char, '$')
str2 = char + str1[1:]
print(str2)
