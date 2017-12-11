import matplotlib.pyplot as plt 

plt.plotfile('datos1.csv', cols=(0,2), delimiter=',')
plt.plotfile('datos1.csv', cols=(0,3), delimiter=',', newfig=False)

plt.xlabel('x')
plt.ylabel('Derivada')
plt.savefig('datos1')
plt.show()


