p[alumno@mod126 ~]$ python
Python 2.6.6 (r266:84292, Aug 18 2016, 12:06:14) 
[GCC 4.4.7 20120313 (Red Hat 4.4.7-17)] on linux2
Type "help", "copyright", "credits" or "license" for more information.
>>> import numpy as np
>>> import pylab as pl
>>> x=(6000,7000,8000,9000,10000)
>>> y=(73,80,85,87,89)
>>> pl.plot(x,y)
/usr/lib64/python2.6/site-packages/matplotlib/backends/backend_gtk.py:621: DeprecationWarning: Use the new widget gtk.Tooltip
  self.tooltips = gtk.Tooltips()
[<matplotlib.lines.Line2D object at 0x2b24510>]
>>> x1=(7000,8000,9000,10000,11000)
>>> y2=(80,83,85,86,88)
>>> pl.plot(x1,y2)
[<matplotlib.lines.Line2D object at 0x24e6ad0>]
>>> pl.xlabel('Voltaje (V)')
<matplotlib.text.Text object at 0x28f4fd0>
>>> pl.ylabel('Eficiencia (%)')
<matplotlib.text.Text object at 0x28f9e50>
>>> pl.savefig('templ.png')
>>> 
