n=2
sum=0
for(i in 1:11){
  sum=sum+(i^2)
  if (i %% 2 !=0)
    next
  print(c(month.abb[i+1],sum))
}


