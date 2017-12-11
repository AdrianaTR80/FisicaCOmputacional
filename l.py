import matplotlib as np
import pylab as pl
pl.plot ((1,2,3,4),(9.00,8.66,8.40,7.50),'k', linewidth=1.0)
pl.annotate('9.00', xy =(1,9.00), xytext=(0.9,8.5), color='b')
pl.annotate('8.66', xy =(2,8.66), xytext=(1.9,9), color='b')
pl.annotate('8.40', xy =(3,8.40), xytext=(2.9,8.0), color='b')
pl.annotate('7.50', xy =(4,7.50), xytext=(3.9,8.0), color='b')
pl.ylabel('promedio')
pl.xlabel('semestre')
pl.title ('Promedio por semestre')
pl.axis((0.5,6.5,5.5,10))
pl.grid(True)

pl.savefig('graph.png')