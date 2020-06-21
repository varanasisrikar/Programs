import re
def domain_name(url):
    if bool(re.search("[a-z]*://",url)):
        url = re.sub("[a-z]*://[a-z]*.","",url,1)
    if bool(re.search("[a-z]*://",url)) and bool(re.search("[a-z]*://[a-z]*.", url)):
        url = re.sub("[a-z]*://","",url,1)
    if bool(re.search("[a-z]*.",url)):
        url = re.sub("[a-z]*.","",url,1)
    return url
    
x = domain_name("http://codewars.com/kata/")
print(x)
