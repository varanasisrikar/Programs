def filter_list(l):
  list = []
  for i in range(len(l)):
      if(not isinstance(l[i], str)):
          list.append(l[i])
  return list 

x = filter_list([1,2,'a','b'])
print(x)
