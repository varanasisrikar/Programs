import numpy as np
import pylab as pl
Y=Data=np.random.uniform(5.8,5.4,1000)
print(Data)
X=np.arange(1,10)
pl.plot(Data,'ro')
pl.show()
pl.plot(Data)
pl.show()
pl.hist(Data)
pl.show()
