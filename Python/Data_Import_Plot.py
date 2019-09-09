import numpy as np
import pylab as pl
Data = np.loadtxt('Data Import Plot.txt')
X = Data[:, 0]
Y = Data[:, 1]
pl.plot(X, Y, 'r')
pl.xlabel("Years")
pl.ylabel("Sales")
pl.show()
