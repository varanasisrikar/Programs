def countBits(n):
  step=0
  while(n!=0):
    x=n%2
    n//=2
    if(x==1):
      step=step+1
  return step

y=int(input("Enter the number to count the bits:"))
print(countBits(y))  