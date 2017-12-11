import numpy as np 
import matplotlib.pyplot as plt 
def f(t):
      return 2*np.cos(t) + 2015
def g(t):
      return t+1997
      
t1=np.arange(0.0,20.0,0.2)
plt.figure(1)
plt.subplot(211)
plt.plot(t1,f(t1),'bo',t1,g(t1),'k')
plt.subplot(212)
plt.plot(t1,f(t1), 'r--')

plt.savefig('g2.png')
plt.show()