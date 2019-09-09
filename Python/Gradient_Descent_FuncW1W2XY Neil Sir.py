def compute_j(w1,w2):
    sum=0
    x =[0,0.25,0.5,0.75,1.00]
    y =[0.8822,1.2165,1.3171,1.7930,1.9826]
    for i in range(5):
        sum = sum +(y[i] -x[i]*w2-w1)**2
    sum = sum/10
    return sum

def compute_gradient_w2(w1,w2):
    gradient =0
    x =[0,0.25,0.5,0.75,1.00]
    y =[0.8822,1.2165,1.3171,1.7930,1.9826]
    for i in range(5):
        a=y[i] - w1
        b=x[i]
        gradient = gradient+ 2*(b**2)*w2 - 2*a*b
    return(gradient/10)

def compute_gradient_w1(w1,w2):
    gradient =0
    x =[0,0.25,0.5,0.75,1.00]
    y =[0.8822,1.2165,1.3171,1.7930,1.9826]
    for i in range(5):
        a=y[i]-w2*x[i]
        gradient = gradient -2*a +2*w1
    return(gradient/10)
#doing the iteration
w1 = 0
w2 = 0
Alpha = 1
for i in range(5):
     j = compute_j(w1,w2)
     print("iteration ",i+1)
     print('w1=',w1)
     print('w2=',w2)
     print('j=',j)
     old_w1=w1
     w1=w1-Alpha*compute_gradient_w1(w1,w2)
     w2=w2-Alpha*compute_gradient_w2(old_w1,w2)
