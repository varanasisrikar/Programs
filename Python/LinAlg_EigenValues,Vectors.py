import numpy as np
import numpy.linalg as alg
l1 = []
rows = int(input("enter rows:"))
cols = int(input("enter cols:"))
for i in range(rows):
    for j in range(cols):
        l1.append(int(input()))
print(l1)
m = np.reshape(l1, (rows, cols))
print(m)
Values, Vectors = alg.eig(m)
print(Values)
print(Vectors[:, 0])
print(Vectors[:, 1])
