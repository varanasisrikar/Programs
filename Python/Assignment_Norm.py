import numpy as np
import numpy.linalg as alg
x=[-10,2,4,8,9]
L1=alg.norm(x,1)
L2=alg.norm(x,2)
L3=alg.norm(x,3)
LInf=alg.norm(x,np.inf)

print(L1)
print(L2)
print(L3)
print(LInf)
